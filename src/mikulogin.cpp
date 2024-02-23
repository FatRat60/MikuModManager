/********************************************************************************
** Form generated from reading UI file 'mikulogin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MIKULOGIN_H
#define MIKULOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *usernameLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameEntry;
    QHBoxLayout *passwordLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordEntry;
    QCheckBox *rememberBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(400, 300);
        verticalLayoutWidget = new QWidget(LoginForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 39, 231, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        usernameLayout = new QHBoxLayout();
        usernameLayout->setObjectName("usernameLayout");
        usernameLabel = new QLabel(verticalLayoutWidget);
        usernameLabel->setObjectName("usernameLabel");

        usernameLayout->addWidget(usernameLabel);

        usernameEntry = new QLineEdit(verticalLayoutWidget);
        usernameEntry->setObjectName("usernameEntry");

        usernameLayout->addWidget(usernameEntry);


        verticalLayout->addLayout(usernameLayout);

        passwordLayout = new QHBoxLayout();
        passwordLayout->setObjectName("passwordLayout");
        passwordLabel = new QLabel(verticalLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setAlignment(Qt::AlignCenter);

        passwordLayout->addWidget(passwordLabel);

        passwordEntry = new QLineEdit(verticalLayoutWidget);
        passwordEntry->setObjectName("passwordEntry");

        passwordLayout->addWidget(passwordEntry);


        verticalLayout->addLayout(passwordLayout);

        rememberBox = new QCheckBox(verticalLayoutWidget);
        rememberBox->setObjectName("rememberBox");
        rememberBox->setLayoutDirection(Qt::LeftToRight);
        rememberBox->setChecked(false);

        verticalLayout->addWidget(rememberBox, 0, Qt::AlignHCenter);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LoginForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LoginForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LoginForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QDialog *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Miku Mod Manager", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LoginForm", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        rememberBox->setText(QCoreApplication::translate("LoginForm", "Remember Me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MIKULOGIN_H
