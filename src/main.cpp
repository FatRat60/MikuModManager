#include <QApplication>
#include <QMainWindow>
#include <QtWidgets>
#include "mikulogin.cpp"
#include "mikumodmanager.cpp"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QSharedMemory* shared = new QSharedMemory("95bad994-0dd5-4acc-9e11-4610e633541a");
    if (!shared->create(512, QSharedMemory::ReadWrite))
    {
        QMessageBox errorMsg;
        QApplication::beep();

        errorMsg.addButton(QMessageBox::Ok);
        errorMsg.setWindowTitle(QObject::tr("Error"));

        errorMsg.setText(QObject::tr("Already Running"));
        errorMsg.setInformativeText(QObject::tr("More than one instance of program not allowed"));

        errorMsg.exec();

        exit(0);
    }

    QMainWindow mainWindow;
    QDialog dialog;

    Ui::LoginForm ui;
    ui.setupUi(&dialog);

    Ui::MainWindow ui2;
    ui2.setupUi(&mainWindow);

    mainWindow.show();

    int val = app.exec();
    shared->deleteLater();
    return val;
}