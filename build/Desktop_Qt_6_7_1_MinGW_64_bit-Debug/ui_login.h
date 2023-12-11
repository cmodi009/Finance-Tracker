/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *lblHeading;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblUsername;
    QLineEdit *txtUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblPassword;
    QLineEdit *txtPassword;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLogin;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(483, 310);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/qf-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(30, 0, -1, -1);
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(60, 60));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/qf-logo.png")));
        label_2->setScaledContents(true);
        label_2->setMargin(0);

        horizontalLayout_5->addWidget(label_2);

        lblHeading = new QLabel(Login);
        lblHeading->setObjectName("lblHeading");
        lblHeading->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        lblHeading->setFont(font);

        horizontalLayout_5->addWidget(lblHeading);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblUsername = new QLabel(Login);
        lblUsername->setObjectName("lblUsername");
        lblUsername->setMinimumSize(QSize(70, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri Light")});
        font1.setPointSize(11);
        lblUsername->setFont(font1);

        horizontalLayout->addWidget(lblUsername);

        txtUsername = new QLineEdit(Login);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setMinimumSize(QSize(65, 25));

        horizontalLayout->addWidget(txtUsername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblPassword = new QLabel(Login);
        lblPassword->setObjectName("lblPassword");
        lblPassword->setMinimumSize(QSize(70, 25));
        lblPassword->setFont(font1);

        horizontalLayout_2->addWidget(lblPassword);

        txtPassword = new QLineEdit(Login);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setMinimumSize(QSize(65, 25));
        txtPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txtPassword);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnLogin = new QPushButton(Login);
        btnLogin->setObjectName("btnLogin");

        horizontalLayout_3->addWidget(btnLogin);

        btnExit = new QPushButton(Login);
        btnExit->setObjectName("btnExit");

        horizontalLayout_3->addWidget(btnExit);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 1, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(96, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(92, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_2->setText(QString());
        lblHeading->setText(QCoreApplication::translate("Login", "Welcome to QFinance", nullptr));
        lblUsername->setText(QCoreApplication::translate("Login", "Username: ", nullptr));
        lblPassword->setText(QCoreApplication::translate("Login", "Password: ", nullptr));
        btnLogin->setText(QCoreApplication::translate("Login", "Login", nullptr));
        btnExit->setText(QCoreApplication::translate("Login", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
