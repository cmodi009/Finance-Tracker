/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lblHeader;
    QGroupBox *groupBox;
    QPushButton *btnIncomeCat;
    QPushButton *btnExpenseCat;
    QGroupBox *groupBox_3;
    QPushButton *btnUser;
    QPushButton *btnAddUser;
    QPushButton *btnEditUser;
    QPushButton *btnDeleteUser;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddCat;
    QPushButton *btnEditCat;
    QPushButton *btnDeleteCat;
    QTableView *tblView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(600, 450);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        lblHeader = new QLabel(Settings);
        lblHeader->setObjectName("lblHeader");
        lblHeader->setMinimumSize(QSize(190, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        lblHeader->setFont(font);
        lblHeader->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lblHeader);


        gridLayout->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        groupBox = new QGroupBox(Settings);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(190, 108));
        btnIncomeCat = new QPushButton(groupBox);
        btnIncomeCat->setObjectName("btnIncomeCat");
        btnIncomeCat->setGeometry(QRect(40, 30, 105, 25));
        btnExpenseCat = new QPushButton(groupBox);
        btnExpenseCat->setObjectName("btnExpenseCat");
        btnExpenseCat->setGeometry(QRect(40, 70, 105, 25));

        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(Settings);
        groupBox_3->setObjectName("groupBox_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(190, 200));
        btnUser = new QPushButton(groupBox_3);
        btnUser->setObjectName("btnUser");
        btnUser->setGeometry(QRect(40, 30, 105, 25));
        btnAddUser = new QPushButton(groupBox_3);
        btnAddUser->setObjectName("btnAddUser");
        btnAddUser->setEnabled(false);
        btnAddUser->setGeometry(QRect(40, 70, 105, 25));
        btnEditUser = new QPushButton(groupBox_3);
        btnEditUser->setObjectName("btnEditUser");
        btnEditUser->setEnabled(false);
        btnEditUser->setGeometry(QRect(40, 110, 105, 25));
        btnDeleteUser = new QPushButton(groupBox_3);
        btnDeleteUser->setObjectName("btnDeleteUser");
        btnDeleteUser->setEnabled(false);
        btnDeleteUser->setGeometry(QRect(40, 150, 105, 25));

        gridLayout->addWidget(groupBox_3, 2, 1, 3, 1);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        btnAddCat = new QPushButton(Settings);
        btnAddCat->setObjectName("btnAddCat");
        btnAddCat->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnAddCat, 5, 3, 1, 1);

        btnEditCat = new QPushButton(Settings);
        btnEditCat->setObjectName("btnEditCat");
        btnEditCat->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnEditCat, 5, 4, 1, 1);

        btnDeleteCat = new QPushButton(Settings);
        btnDeleteCat->setObjectName("btnDeleteCat");
        btnDeleteCat->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnDeleteCat, 5, 5, 1, 1);

        tblView = new QTableView(Settings);
        tblView->setObjectName("tblView");
        QFont font1;
        font1.setKerning(true);
        tblView->setFont(font1);
        tblView->setFrameShape(QFrame::NoFrame);
        tblView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblView->setSelectionMode(QAbstractItemView::SingleSelection);
        tblView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblView->setShowGrid(true);
        tblView->setCornerButtonEnabled(true);
        tblView->horizontalHeader()->setMinimumSectionSize(37);

        gridLayout->addWidget(tblView, 0, 3, 5, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Form", nullptr));
        lblHeader->setText(QCoreApplication::translate("Settings", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Settings", "View Category List:", nullptr));
        btnIncomeCat->setText(QCoreApplication::translate("Settings", "Income Category", nullptr));
        btnExpenseCat->setText(QCoreApplication::translate("Settings", "Expense Category", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Settings", "User:", nullptr));
        btnUser->setText(QCoreApplication::translate("Settings", "View All", nullptr));
        btnAddUser->setText(QCoreApplication::translate("Settings", "Add New", nullptr));
        btnEditUser->setText(QCoreApplication::translate("Settings", "Edit Seleleted", nullptr));
        btnDeleteUser->setText(QCoreApplication::translate("Settings", "Delete Selected", nullptr));
        btnAddCat->setText(QCoreApplication::translate("Settings", "Add", nullptr));
        btnEditCat->setText(QCoreApplication::translate("Settings", "Edit", nullptr));
        btnDeleteCat->setText(QCoreApplication::translate("Settings", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
