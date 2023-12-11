/********************************************************************************
** Form generated from reading UI file 'addincome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINCOME_H
#define UI_ADDINCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddIncome
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblHeader;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblDate;
    QDateEdit *txtDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblAmount;
    QLineEdit *txtAmount;
    QPushButton *btnOpenCalculator;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblPayer;
    QLineEdit *txtPayer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblCategory;
    QComboBox *cmbCategory;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblDescription;
    QTextEdit *txtDescription;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddIncome)
    {
        if (AddIncome->objectName().isEmpty())
            AddIncome->setObjectName("AddIncome");
        AddIncome->resize(650, 400);
        gridLayout = new QGridLayout(AddIncome);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_3 = new QSpacerItem(60, 25, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        lblHeader = new QLabel(AddIncome);
        lblHeader->setObjectName("lblHeader");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        lblHeader->setFont(font);

        horizontalLayout_9->addWidget(lblHeader);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblDate = new QLabel(AddIncome);
        lblDate->setObjectName("lblDate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblDate->sizePolicy().hasHeightForWidth());
        lblDate->setSizePolicy(sizePolicy);
        lblDate->setMinimumSize(QSize(60, 25));

        horizontalLayout_4->addWidget(lblDate);

        txtDate = new QDateEdit(AddIncome);
        txtDate->setObjectName("txtDate");
        txtDate->setFocusPolicy(Qt::NoFocus);
        txtDate->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        txtDate->setCalendarPopup(true);

        horizontalLayout_4->addWidget(txtDate);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lblAmount = new QLabel(AddIncome);
        lblAmount->setObjectName("lblAmount");
        lblAmount->setMinimumSize(QSize(60, 25));

        horizontalLayout_5->addWidget(lblAmount);

        txtAmount = new QLineEdit(AddIncome);
        txtAmount->setObjectName("txtAmount");
        txtAmount->setMinimumSize(QSize(100, 25));

        horizontalLayout_5->addWidget(txtAmount);

        btnOpenCalculator = new QPushButton(AddIncome);
        btnOpenCalculator->setObjectName("btnOpenCalculator");

        horizontalLayout_5->addWidget(btnOpenCalculator);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblPayer = new QLabel(AddIncome);
        lblPayer->setObjectName("lblPayer");
        lblPayer->setMinimumSize(QSize(60, 25));

        horizontalLayout_6->addWidget(lblPayer);

        txtPayer = new QLineEdit(AddIncome);
        txtPayer->setObjectName("txtPayer");
        txtPayer->setMinimumSize(QSize(100, 25));

        horizontalLayout_6->addWidget(txtPayer);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblCategory = new QLabel(AddIncome);
        lblCategory->setObjectName("lblCategory");
        lblCategory->setMinimumSize(QSize(60, 25));

        horizontalLayout_7->addWidget(lblCategory);

        cmbCategory = new QComboBox(AddIncome);
        cmbCategory->setObjectName("cmbCategory");
        cmbCategory->setMinimumSize(QSize(150, 25));

        horizontalLayout_7->addWidget(cmbCategory);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout_3->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lblDescription = new QLabel(AddIncome);
        lblDescription->setObjectName("lblDescription");
        lblDescription->setMinimumSize(QSize(60, 25));

        horizontalLayout_10->addWidget(lblDescription);

        txtDescription = new QTextEdit(AddIncome);
        txtDescription->setObjectName("txtDescription");

        horizontalLayout_10->addWidget(txtDescription);


        gridLayout_3->addLayout(horizontalLayout_10, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(65, 25, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btnSave = new QPushButton(AddIncome);
        btnSave->setObjectName("btnSave");
        btnSave->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnSave);

        btnClear = new QPushButton(AddIncome);
        btnClear->setObjectName("btnClear");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);
        btnClear->setMinimumSize(QSize(0, 0));
        btnClear->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnClear);

        horizontalSpacer_2 = new QSpacerItem(309, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_8, 6, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        QWidget::setTabOrder(txtAmount, txtPayer);
        QWidget::setTabOrder(txtPayer, txtDescription);
        QWidget::setTabOrder(txtDescription, btnSave);
        QWidget::setTabOrder(btnSave, btnClear);

        retranslateUi(AddIncome);

        cmbCategory->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddIncome);
    } // setupUi

    void retranslateUi(QWidget *AddIncome)
    {
        AddIncome->setWindowTitle(QCoreApplication::translate("AddIncome", "Form", nullptr));
        lblHeader->setText(QCoreApplication::translate("AddIncome", "Add Income", nullptr));
        lblDate->setText(QCoreApplication::translate("AddIncome", "Date: ", nullptr));
        txtDate->setDisplayFormat(QCoreApplication::translate("AddIncome", "dd/MM/yyyy", nullptr));
        lblAmount->setText(QCoreApplication::translate("AddIncome", "Amount: ", nullptr));
        btnOpenCalculator->setText(QCoreApplication::translate("AddIncome", "Calculator", nullptr));
        lblPayer->setText(QCoreApplication::translate("AddIncome", "Payer: ", nullptr));
        lblCategory->setText(QCoreApplication::translate("AddIncome", "Category: ", nullptr));
        lblDescription->setText(QCoreApplication::translate("AddIncome", "Description: ", nullptr));
        btnSave->setText(QCoreApplication::translate("AddIncome", "Save", nullptr));
        btnClear->setText(QCoreApplication::translate("AddIncome", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddIncome: public Ui_AddIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINCOME_H
