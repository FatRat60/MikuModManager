#include <QApplication>
#include <QMainWindow>
#include "mikulogin.cpp"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QDialog dialog;

    Ui::LoginForm ui;
    ui.setupUi(&dialog);

    dialog.show();

    return app.exec();
}