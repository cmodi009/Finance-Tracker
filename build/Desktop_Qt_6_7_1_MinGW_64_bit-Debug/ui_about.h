/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *lblHeading;
    QSpacerItem *horizontalSpacer;
    QLabel *lblDescription;
    QLabel *lblCredits;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(650, 400);
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(20, 20, -1, -1);
        label_2 = new QLabel(About);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/qf-logo.png")));
        label_2->setScaledContents(true);
        label_2->setMargin(0);

        horizontalLayout_5->addWidget(label_2);

        lblHeading = new QLabel(About);
        lblHeading->setObjectName("lblHeading");
        lblHeading->setMinimumSize(QSize(200, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        lblHeading->setFont(font);

        horizontalLayout_5->addWidget(lblHeading);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        lblDescription = new QLabel(About);
        lblDescription->setObjectName("lblDescription");
        lblDescription->setMinimumSize(QSize(0, 56));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri Light")});
        font1.setPointSize(12);
        lblDescription->setFont(font1);
        lblDescription->setTextFormat(Qt::RichText);

        gridLayout->addWidget(lblDescription, 1, 1, 1, 1);

        lblCredits = new QLabel(About);
        lblCredits->setObjectName("lblCredits");
        lblCredits->setMinimumSize(QSize(0, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri Light")});
        font2.setPointSize(14);
        lblCredits->setFont(font2);

        gridLayout->addWidget(lblCredits, 2, 1, 1, 1);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Form", nullptr));
        label_2->setText(QString());
        lblHeading->setText(QCoreApplication::translate("About", "QFinance v1.0", nullptr));
        lblDescription->setText(QCoreApplication::translate("About", "<html><head/><body><p>QFinance is a cross platform Expense Manager, which helps you keep track of your daily <br/>income and expense. It has the following main features: </p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Secure Login authentication</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Multiple User Accounts</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Built in Calculator</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Summary view<br/></li></ul></body></html>", nullptr));
        lblCredits->setText(QCoreApplication::translate("About", "<html><head/><body><p><span style=\" font-size:12pt;\">Developer:</span></p><p>Muhammad Muhsin<br/>10515923<br/>Pymouth University</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
