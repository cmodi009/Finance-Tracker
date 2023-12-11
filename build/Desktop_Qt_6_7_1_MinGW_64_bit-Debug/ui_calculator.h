/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btnNum7;
    QPushButton *btnNum9;
    QPushButton *btnClear;
    QPushButton *btnNum8;
    QPushButton *btnNum6;
    QPushButton *btnPlus;
    QPushButton *btnNum5;
    QPushButton *btnNum4;
    QPushButton *btnNum1;
    QPushButton *btnDivide;
    QPushButton *btnNum2;
    QPushButton *btnNum0;
    QPushButton *btnMultiply;
    QPushButton *btnMinus;
    QPushButton *btnNum3;
    QPushButton *btnEqual;
    QLabel *lblDisplay;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(338, 173);
        gridLayout_2 = new QGridLayout(Calculator);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnNum7 = new QPushButton(Calculator);
        btnNum7->setObjectName("btnNum7");

        gridLayout->addWidget(btnNum7, 1, 0, 1, 1);

        btnNum9 = new QPushButton(Calculator);
        btnNum9->setObjectName("btnNum9");

        gridLayout->addWidget(btnNum9, 1, 2, 1, 1);

        btnClear = new QPushButton(Calculator);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);

        btnNum8 = new QPushButton(Calculator);
        btnNum8->setObjectName("btnNum8");

        gridLayout->addWidget(btnNum8, 1, 1, 1, 1);

        btnNum6 = new QPushButton(Calculator);
        btnNum6->setObjectName("btnNum6");

        gridLayout->addWidget(btnNum6, 2, 2, 1, 1);

        btnPlus = new QPushButton(Calculator);
        btnPlus->setObjectName("btnPlus");

        gridLayout->addWidget(btnPlus, 2, 3, 1, 1);

        btnNum5 = new QPushButton(Calculator);
        btnNum5->setObjectName("btnNum5");

        gridLayout->addWidget(btnNum5, 2, 1, 1, 1);

        btnNum4 = new QPushButton(Calculator);
        btnNum4->setObjectName("btnNum4");

        gridLayout->addWidget(btnNum4, 2, 0, 1, 1);

        btnNum1 = new QPushButton(Calculator);
        btnNum1->setObjectName("btnNum1");

        gridLayout->addWidget(btnNum1, 3, 0, 1, 1);

        btnDivide = new QPushButton(Calculator);
        btnDivide->setObjectName("btnDivide");

        gridLayout->addWidget(btnDivide, 4, 2, 1, 1);

        btnNum2 = new QPushButton(Calculator);
        btnNum2->setObjectName("btnNum2");

        gridLayout->addWidget(btnNum2, 3, 1, 1, 1);

        btnNum0 = new QPushButton(Calculator);
        btnNum0->setObjectName("btnNum0");

        gridLayout->addWidget(btnNum0, 4, 1, 1, 1);

        btnMultiply = new QPushButton(Calculator);
        btnMultiply->setObjectName("btnMultiply");

        gridLayout->addWidget(btnMultiply, 4, 0, 1, 1);

        btnMinus = new QPushButton(Calculator);
        btnMinus->setObjectName("btnMinus");

        gridLayout->addWidget(btnMinus, 3, 3, 1, 1);

        btnNum3 = new QPushButton(Calculator);
        btnNum3->setObjectName("btnNum3");

        gridLayout->addWidget(btnNum3, 3, 2, 1, 1);

        btnEqual = new QPushButton(Calculator);
        btnEqual->setObjectName("btnEqual");

        gridLayout->addWidget(btnEqual, 4, 3, 1, 1);

        lblDisplay = new QLabel(Calculator);
        lblDisplay->setObjectName("lblDisplay");
        lblDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 243, 220);\n"
"font: 20pt \"Yu Gothic UI\";"));

        gridLayout->addWidget(lblDisplay, 0, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Form", nullptr));
        btnNum7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        btnNum9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        btnClear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        btnNum8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        btnNum6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        btnPlus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        btnNum5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        btnNum4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        btnNum1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        btnDivide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        btnNum2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        btnNum0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        btnMultiply->setText(QCoreApplication::translate("Calculator", "X", nullptr));
        btnMinus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        btnNum3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        btnEqual->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        lblDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
