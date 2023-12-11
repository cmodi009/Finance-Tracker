/********************************************************************************
** Form generated from reading UI file 'viewincome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWINCOME_H
#define UI_VIEWINCOME_H

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

class Ui_ViewIncome
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tblIncome;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ViewIncome)
    {
        if (ViewIncome->objectName().isEmpty())
            ViewIncome->setObjectName("ViewIncome");
        ViewIncome->resize(650, 400);
        verticalLayout = new QVBoxLayout(ViewIncome);
        verticalLayout->setObjectName("verticalLayout");
        tblIncome = new QTableView(ViewIncome);
        tblIncome->setObjectName("tblIncome");
        tblIncome->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblIncome->setSelectionMode(QAbstractItemView::SingleSelection);
        tblIncome->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tblIncome);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnEdit = new QPushButton(ViewIncome);
        btnEdit->setObjectName("btnEdit");

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(ViewIncome);
        btnDelete->setObjectName("btnDelete");

        horizontalLayout->addWidget(btnDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ViewIncome);

        QMetaObject::connectSlotsByName(ViewIncome);
    } // setupUi

    void retranslateUi(QWidget *ViewIncome)
    {
        ViewIncome->setWindowTitle(QCoreApplication::translate("ViewIncome", "Form", nullptr));
        btnEdit->setText(QCoreApplication::translate("ViewIncome", "Edit", nullptr));
        btnDelete->setText(QCoreApplication::translate("ViewIncome", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewIncome: public Ui_ViewIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWINCOME_H
