#!/bin/bash

# check number of args
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

cd src

# get filename from args
filename="$1"

# Run script
uic "$filename.ui" -o "$filename.cpp"

if [ $? -ne 0 ]; then
    echo "Error: uic failed"
    exit 1
fi

echo "$filename.cpp successfully created"

cd ..

# edit file in future
python editPro.py "$filename"