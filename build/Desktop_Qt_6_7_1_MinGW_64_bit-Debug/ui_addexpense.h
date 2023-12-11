/********************************************************************************
** Form generated from reading UI file 'addexpense.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXPENSE_H
#define UI_ADDEXPENSE_H

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

class Ui_AddExpense
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblHeader;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblDate;
    QDateEdit *txtDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblAmount;
    QLineEdit *txtAmount;
    QPushButton *btnOpenCalculator;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblPayee;
    QLineEdit *txtPayee;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblCategory;
    QComboBox *cmbCategory;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblDescription;
    QTextEdit *txtDescription;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *AddExpense)
    {
        if (AddExpense->objectName().isEmpty())
            AddExpense->setObjectName("AddExpense");
        AddExpense->resize(650, 400);
        gridLayout = new QGridLayout(AddExpense);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_4 = new QSpacerItem(60, 25, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        lblHeader = new QLabel(AddExpense);
        lblHeader->setObjectName("lblHeader");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        lblHeader->setFont(font);

        horizontalLayout_9->addWidget(lblHeader);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblDate = new QLabel(AddExpense);
        lblDate->setObjectName("lblDate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblDate->sizePolicy().hasHeightForWidth());
        lblDate->setSizePolicy(sizePolicy);
        lblDate->setMinimumSize(QSize(60, 25));

        horizontalLayout_4->addWidget(lblDate);

        txtDate = new QDateEdit(AddExpense);
        txtDate->setObjectName("txtDate");
        txtDate->setFocusPolicy(Qt::NoFocus);
        txtDate->setCalendarPopup(true);

        horizontalLayout_4->addWidget(txtDate);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lblAmount = new QLabel(AddExpense);
        lblAmount->setObjectName("lblAmount");
        lblAmount->setMinimumSize(QSize(60, 25));

        horizontalLayout_5->addWidget(lblAmount);

        txtAmount = new QLineEdit(AddExpense);
        txtAmount->setObjectName("txtAmount");
        txtAmount->setMinimumSize(QSize(100, 25));

        horizontalLayout_5->addWidget(txtAmount);

        btnOpenCalculator = new QPushButton(AddExpense);
        btnOpenCalculator->setObjectName("btnOpenCalculator");

        horizontalLayout_5->addWidget(btnOpenCalculator);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblPayee = new QLabel(AddExpense);
        lblPayee->setObjectName("lblPayee");
        lblPayee->setMinimumSize(QSize(60, 25));

        horizontalLayout_6->addWidget(lblPayee);

        txtPayee = new QLineEdit(AddExpense);
        txtPayee->setObjectName("txtPayee");
        txtPayee->setMinimumSize(QSize(100, 25));

        horizontalLayout_6->addWidget(txtPayee);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblCategory = new QLabel(AddExpense);
        lblCategory->setObjectName("lblCategory");
        lblCategory->setMinimumSize(QSize(60, 25));

        horizontalLayout_7->addWidget(lblCategory);

        cmbCategory = new QComboBox(AddExpense);
        cmbCategory->setObjectName("cmbCategory");
        cmbCategory->setMinimumSize(QSize(150, 25));

        horizontalLayout_7->addWidget(cmbCategory);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lblDescription = new QLabel(AddExpense);
        lblDescription->setObjectName("lblDescription");
        lblDescription->setMinimumSize(QSize(60, 25));

        horizontalLayout_10->addWidget(lblDescription);

        txtDescription = new QTextEdit(AddExpense);
        txtDescription->setObjectName("txtDescription");

        horizontalLayout_10->addWidget(txtDescription);


        gridLayout->addLayout(horizontalLayout_10, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(65, 25, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        btnSave = new QPushButton(AddExpense);
        btnSave->setObjectName("btnSave");
        btnSave->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnSave);

        btnClear = new QPushButton(AddExpense);
        btnClear->setObjectName("btnClear");

        horizontalLayout_8->addWidget(btnClear);

        horizontalSpacer_3 = new QSpacerItem(309, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_8, 6, 0, 1, 1);

        QWidget::setTabOrder(txtAmount, txtPayee);
        QWidget::setTabOrder(txtPayee, txtDescription);
        QWidget::setTabOrder(txtDescription, btnSave);

        retranslateUi(AddExpense);

        cmbCategory->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddExpense);
    } // setupUi

    void retranslateUi(QWidget *AddExpense)
    {
        AddExpense->setWindowTitle(QCoreApplication::translate("AddExpense", "Form", nullptr));
        lblHeader->setText(QCoreApplication::translate("AddExpense", "New Expense", nullptr));
        lblDate->setText(QCoreApplication::translate("AddExpense", "Date: ", nullptr));
        txtDate->setDisplayFormat(QCoreApplication::translate("AddExpense", "dd/MM/yyyy", nullptr));
        lblAmount->setText(QCoreApplication::translate("AddExpense", "Amount: ", nullptr));
        btnOpenCalculator->setText(QCoreApplication::translate("AddExpense", "Calculator", nullptr));
        lblPayee->setText(QCoreApplication::translate("AddExpense", "Payee: ", nullptr));
        lblCategory->setText(QCoreApplication::translate("AddExpense", "Category: ", nullptr));
        lblDescription->setText(QCoreApplication::translate("AddExpense", "Description: ", nullptr));
        btnSave->setText(QCoreApplication::translate("AddExpense", "Save", nullptr));
        btnClear->setText(QCoreApplication::translate("AddExpense", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddExpense: public Ui_AddExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXPENSE_H
