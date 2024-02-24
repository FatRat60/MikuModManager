import sys
import os

FILE_NAME = "mikumodmanager.pro"

if __name__ == "__main__":
    # check if .h file generated
    args = sys.argv
    if len(args) < 2:
        print("no filename given")
        exit(1)
    filename = args[1]
    existsHFile = os.path.exists(f"src/{filename}.h")
    doWrite = False

    cppFileName = f"{filename}.cpp"
    
    with open(FILE_NAME, "r+") as file:
        # read lines
        contents = file.read()
        sections = contents.split("\n\n")
        # skip to sources
        sources = sections[1]
        # split sources into lines
        source_lines = sources.split("\n")
        existsCPP = False
        for i in range(2, len(source_lines)):
            # file found
            if source_lines[i].find(cppFileName) != -1:
                existsCPP = True
                break 
        # need to add it to sources
        if not existsCPP:
            oldLastLine = source_lines[-1]
            newLastLine = f"\tsrc/{cppFileName}"
            source_lines[-1] = f"{oldLastLine} \\"
            source_lines.append(newLastLine)
            sections[1] = "\n".join(source_lines)
            doWrite = True
        
        # Now check Headers
        if existsHFile:
            headers = sections[2]
            header_lines = headers.split("\n")
            existsHFile = False
            for i in range(2, len(header_lines)):
                # file found
                if header_lines[i].find(filename) != -1:
                    existsHFile = True
                    break
            if not existsHFile:
                oldLastLine = header_lines[-1]
                newLastLine = f"\tsrc/{filename}.h"
                header_lines[-1] = f"{oldLastLine} \\"
                header_lines.append(newLastLine)
                sections[2] = "\n".join(header_lines)
                doWrite = True # think this is redundant but just to be safe
        
        # Now rejoin sections a rewrite to file
        if doWrite:
            file.seek(0)
            new_contents = "\n\n".join(sections)
            file.write(new_contents)
            file.truncate() # new contents will never be shorter but just in case
            print(f"Source/Headers added to {FILE_NAME}")
        else:
            print(f"No changes made to {FILE_NAME}")