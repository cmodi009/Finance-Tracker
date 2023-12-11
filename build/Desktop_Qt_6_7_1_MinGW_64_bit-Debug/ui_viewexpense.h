/********************************************************************************
** Form generated from reading UI file 'viewexpense.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEXPENSE_H
#define UI_VIEWEXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewExpense
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tblExpense;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ViewExpense)
    {
        if (ViewExpense->objectName().isEmpty())
            ViewExpense->setObjectName("ViewExpense");
        ViewExpense->resize(650, 400);
        verticalLayout = new QVBoxLayout(ViewExpense);
        verticalLayout->setObjectName("verticalLayout");
        tblExpense = new QTableView(ViewExpense);
        tblExpense->setObjectName("tblExpense");
        tblExpense->setSelectionMode(QAbstractItemView::SingleSelection);
        tblExpense->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblExpense->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(tblExpense);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnEdit = new QPushButton(ViewExpense);
        btnEdit->setObjectName("btnEdit");

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(ViewExpense);
        btnDelete->setObjectName("btnDelete");

        horizontalLayout->addWidget(btnDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ViewExpense);

        QMetaObject::connectSlotsByName(ViewExpense);
    } // setupUi

    void retranslateUi(QWidget *ViewExpense)
    {
        ViewExpense->setWindowTitle(QCoreApplication::translate("ViewExpense", "Form", nullptr));
        btnEdit->setText(QCoreApplication::translate("ViewExpense", "Edit", nullptr));
        btnDelete->setText(QCoreApplication::translate("ViewExpense", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewExpense: public Ui_ViewExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEXPENSE_H
