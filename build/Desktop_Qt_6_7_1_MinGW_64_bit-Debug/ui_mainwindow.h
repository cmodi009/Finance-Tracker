/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAdd_Income;
    QAction *actionAdd_Expense;
    QAction *actionView_Income;
    QAction *actionView_Expense;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionSettings;
    QAction *actionLog_out;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *lblHeading;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbLIncome;
    QLabel *lblIncomeAmount;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblExpense;
    QLabel *lblExpenseAmount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblBalance;
    QLabel *lblBalanceAmount;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuAdd_Transactions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(669, 482);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/qf-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionAdd_Income = new QAction(MainWindow);
        actionAdd_Income->setObjectName("actionAdd_Income");
        actionAdd_Expense = new QAction(MainWindow);
        actionAdd_Expense->setObjectName("actionAdd_Expense");
        actionView_Income = new QAction(MainWindow);
        actionView_Income->setObjectName("actionView_Income");
        actionView_Expense = new QAction(MainWindow);
        actionView_Expense->setObjectName("actionView_Expense");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName("actionAbout_Qt");
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionLog_out = new QAction(MainWindow);
        actionLog_out->setObjectName("actionLog_out");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(20, 20, -1, -1);
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/qf-logo.png")));
        label_2->setScaledContents(true);
        label_2->setMargin(0);

        horizontalLayout_5->addWidget(label_2);

        lblHeading = new QLabel(tab);
        lblHeading->setObjectName("lblHeading");
        lblHeading->setMinimumSize(QSize(200, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        lblHeading->setFont(font);

        horizontalLayout_5->addWidget(lblHeading);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 2, 3);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(125, -1, -1, -1);
        label = new QLabel(tab);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(16);
        label->setFont(font1);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbLIncome = new QLabel(tab);
        lbLIncome->setObjectName("lbLIncome");
        lbLIncome->setMinimumSize(QSize(110, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri Light")});
        font2.setPointSize(14);
        lbLIncome->setFont(font2);

        horizontalLayout_2->addWidget(lbLIncome);

        lblIncomeAmount = new QLabel(tab);
        lblIncomeAmount->setObjectName("lblIncomeAmount");
        lblIncomeAmount->setMinimumSize(QSize(70, 30));
        lblIncomeAmount->setFont(font2);
        lblIncomeAmount->setStyleSheet(QString::fromUtf8("color:rgb(0, 170, 0)"));

        horizontalLayout_2->addWidget(lblIncomeAmount);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblExpense = new QLabel(tab);
        lblExpense->setObjectName("lblExpense");
        lblExpense->setMinimumSize(QSize(110, 30));
        lblExpense->setFont(font2);

        horizontalLayout_3->addWidget(lblExpense);

        lblExpenseAmount = new QLabel(tab);
        lblExpenseAmount->setObjectName("lblExpenseAmount");
        lblExpenseAmount->setMinimumSize(QSize(70, 30));
        lblExpenseAmount->setFont(font2);
        lblExpenseAmount->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(lblExpenseAmount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblBalance = new QLabel(tab);
        lblBalance->setObjectName("lblBalance");
        lblBalance->setMinimumSize(QSize(110, 30));
        lblBalance->setFont(font2);

        horizontalLayout_4->addWidget(lblBalance);

        lblBalanceAmount = new QLabel(tab);
        lblBalanceAmount->setObjectName("lblBalanceAmount");
        lblBalanceAmount->setMinimumSize(QSize(70, 30));
        lblBalanceAmount->setFont(font2);

        horizontalLayout_4->addWidget(lblBalanceAmount);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 61, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 669, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        menuAdd_Transactions = new QMenu(menuBar);
        menuAdd_Transactions->setObjectName("menuAdd_Transactions");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAdd_Transactions->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addAction(actionLog_out);
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        menuView->addAction(actionView_Income);
        menuView->addAction(actionView_Expense);
        menuAdd_Transactions->addAction(actionAdd_Income);
        menuAdd_Transactions->addAction(actionAdd_Expense);
        mainToolBar->addAction(actionAdd_Income);
        mainToolBar->addAction(actionAdd_Expense);
        mainToolBar->addAction(actionView_Income);
        mainToolBar->addAction(actionView_Expense);
        mainToolBar->addAction(actionSettings);
        mainToolBar->addAction(actionLog_out);
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QFinance 1.0", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_Income->setText(QCoreApplication::translate("MainWindow", "Add Income", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Income->setToolTip(QCoreApplication::translate("MainWindow", "Add a New Income Transaction", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd_Income->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_Expense->setText(QCoreApplication::translate("MainWindow", "Add Expense", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Expense->setToolTip(QCoreApplication::translate("MainWindow", "Add a New Expense Transaction", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd_Expense->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionView_Income->setText(QCoreApplication::translate("MainWindow", "View Income", nullptr));
#if QT_CONFIG(tooltip)
        actionView_Income->setToolTip(QCoreApplication::translate("MainWindow", "View Income records in a table", nullptr));
#endif // QT_CONFIG(tooltip)
        actionView_Expense->setText(QCoreApplication::translate("MainWindow", "View Expense", nullptr));
#if QT_CONFIG(tooltip)
        actionView_Expense->setToolTip(QCoreApplication::translate("MainWindow", "View Expense records in a table", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "About QFinance", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSettings->setToolTip(QCoreApplication::translate("MainWindow", "Change Settins", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLog_out->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        label_2->setText(QString());
        lblHeading->setText(QCoreApplication::translate("MainWindow", "QFinance v1.0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Your account Summary:", nullptr));
        lbLIncome->setText(QCoreApplication::translate("MainWindow", "Total Income: ", nullptr));
        lblIncomeAmount->setText(QString());
        lblExpense->setText(QCoreApplication::translate("MainWindow", "Total Expense: ", nullptr));
        lblExpenseAmount->setText(QString());
        lblBalance->setText(QCoreApplication::translate("MainWindow", "Total Balance:", nullptr));
        lblBalanceAmount->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "QFinance", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View Transactions", nullptr));
        menuAdd_Transactions->setTitle(QCoreApplication::translate("MainWindow", "Add Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
