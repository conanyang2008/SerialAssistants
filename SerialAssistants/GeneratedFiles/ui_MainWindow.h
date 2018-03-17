/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *saveAction;
    QAction *quitAction;
    QAction *startAction;
    QAction *pauseAction;
    QAction *stopAction;
    QAction *aboutAction;
    QAction *clearAction;
    QAction *action;
    QWidget *centralWidget;
    QTextEdit *ReceiveTextEdit;
    QTextEdit *SendTextEdit;
    QComboBox *comboBox;
    QPushButton *SendButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *SerialSettingGroupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *SerialLabel;
    QLabel *baudrateLabel;
    QLabel *databitLabel;
    QLabel *checkbitLabel;
    QLabel *stopbitLabel;
    QLabel *flowcontrolLabel;
    QVBoxLayout *verticalLayout_2;
    QComboBox *SerialComboBox;
    QComboBox *baudrateComboBox;
    QComboBox *databitComboBox;
    QComboBox *checkbitComboBox;
    QComboBox *stopbitComboBox;
    QComboBox *flowcontrolComboBox;
    QGroupBox *ReceiveSettingGroupBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *AsciiButton_1;
    QRadioButton *HexButton_1;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *AutocheckBox;
    QCheckBox *ShowsendcheckBox;
    QCheckBox *ShowtimecheckBox;
    QGroupBox *SendSettingGroupBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *AsciiButton_2;
    QRadioButton *HexButton_2;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *sendCheckBox;
    QSpinBox *timespinBox;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(800, 600);
        MainWindowClass->setMinimumSize(QSize(800, 600));
        saveAction = new QAction(MainWindowClass);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindow/image/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon);
        quitAction = new QAction(MainWindowClass);
        quitAction->setObjectName(QStringLiteral("quitAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainWindow/image/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitAction->setIcon(icon1);
        startAction = new QAction(MainWindowClass);
        startAction->setObjectName(QStringLiteral("startAction"));
        startAction->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainWindow/image/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startAction->setIcon(icon2);
        pauseAction = new QAction(MainWindowClass);
        pauseAction->setObjectName(QStringLiteral("pauseAction"));
        pauseAction->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainWindow/image/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseAction->setIcon(icon3);
        stopAction = new QAction(MainWindowClass);
        stopAction->setObjectName(QStringLiteral("stopAction"));
        stopAction->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MainWindow/image/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopAction->setIcon(icon4);
        aboutAction = new QAction(MainWindowClass);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        aboutAction->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MainWindow/image/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutAction->setIcon(icon5);
        clearAction = new QAction(MainWindowClass);
        clearAction->setObjectName(QStringLiteral("clearAction"));
        clearAction->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MainWindow/image/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearAction->setIcon(icon6);
        action = new QAction(MainWindowClass);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MainWindow/image/refalsh.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon7);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ReceiveTextEdit = new QTextEdit(centralWidget);
        ReceiveTextEdit->setObjectName(QStringLiteral("ReceiveTextEdit"));
        ReceiveTextEdit->setGeometry(QRect(200, 10, 580, 391));
        ReceiveTextEdit->setMinimumSize(QSize(580, 300));
        SendTextEdit = new QTextEdit(centralWidget);
        SendTextEdit->setObjectName(QStringLiteral("SendTextEdit"));
        SendTextEdit->setGeometry(QRect(200, 410, 500, 60));
        SendTextEdit->setMinimumSize(QSize(500, 60));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(200, 480, 580, 30));
        comboBox->setMinimumSize(QSize(580, 30));
        SendButton = new QPushButton(centralWidget);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(710, 410, 60, 60));
        SendButton->setMinimumSize(QSize(50, 60));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 182, 454));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        SerialSettingGroupBox = new QGroupBox(layoutWidget);
        SerialSettingGroupBox->setObjectName(QStringLiteral("SerialSettingGroupBox"));
        SerialSettingGroupBox->setMinimumSize(QSize(180, 220));
        layoutWidget1 = new QWidget(SerialSettingGroupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 162, 174));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SerialLabel = new QLabel(layoutWidget1);
        SerialLabel->setObjectName(QStringLiteral("SerialLabel"));
        SerialLabel->setMinimumSize(QSize(50, 20));

        verticalLayout->addWidget(SerialLabel);

        baudrateLabel = new QLabel(layoutWidget1);
        baudrateLabel->setObjectName(QStringLiteral("baudrateLabel"));
        baudrateLabel->setMinimumSize(QSize(50, 20));

        verticalLayout->addWidget(baudrateLabel);

        databitLabel = new QLabel(layoutWidget1);
        databitLabel->setObjectName(QStringLiteral("databitLabel"));
        databitLabel->setMinimumSize(QSize(50, 20));

        verticalLayout->addWidget(databitLabel);

        checkbitLabel = new QLabel(layoutWidget1);
        checkbitLabel->setObjectName(QStringLiteral("checkbitLabel"));
        checkbitLabel->setMinimumSize(QSize(50, 20));

        verticalLayout->addWidget(checkbitLabel);

        stopbitLabel = new QLabel(layoutWidget1);
        stopbitLabel->setObjectName(QStringLiteral("stopbitLabel"));
        stopbitLabel->setMinimumSize(QSize(50, 20));

        verticalLayout->addWidget(stopbitLabel);

        flowcontrolLabel = new QLabel(layoutWidget1);
        flowcontrolLabel->setObjectName(QStringLiteral("flowcontrolLabel"));
        flowcontrolLabel->setMinimumSize(QSize(50, 20));

        verticalLayout->addWidget(flowcontrolLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        SerialComboBox = new QComboBox(layoutWidget1);
        SerialComboBox->setObjectName(QStringLiteral("SerialComboBox"));
        SerialComboBox->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(SerialComboBox);

        baudrateComboBox = new QComboBox(layoutWidget1);
        baudrateComboBox->setObjectName(QStringLiteral("baudrateComboBox"));
        baudrateComboBox->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(baudrateComboBox);

        databitComboBox = new QComboBox(layoutWidget1);
        databitComboBox->setObjectName(QStringLiteral("databitComboBox"));
        databitComboBox->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(databitComboBox);

        checkbitComboBox = new QComboBox(layoutWidget1);
        checkbitComboBox->setObjectName(QStringLiteral("checkbitComboBox"));
        checkbitComboBox->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(checkbitComboBox);

        stopbitComboBox = new QComboBox(layoutWidget1);
        stopbitComboBox->setObjectName(QStringLiteral("stopbitComboBox"));
        stopbitComboBox->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(stopbitComboBox);

        flowcontrolComboBox = new QComboBox(layoutWidget1);
        flowcontrolComboBox->setObjectName(QStringLiteral("flowcontrolComboBox"));
        flowcontrolComboBox->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(flowcontrolComboBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(SerialSettingGroupBox);

        ReceiveSettingGroupBox = new QGroupBox(layoutWidget);
        ReceiveSettingGroupBox->setObjectName(QStringLiteral("ReceiveSettingGroupBox"));
        ReceiveSettingGroupBox->setMinimumSize(QSize(180, 135));
        layoutWidget2 = new QWidget(ReceiveSettingGroupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 21, 148, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        AsciiButton_1 = new QRadioButton(layoutWidget2);
        AsciiButton_1->setObjectName(QStringLiteral("AsciiButton_1"));
        AsciiButton_1->setMinimumSize(QSize(70, 20));

        horizontalLayout_2->addWidget(AsciiButton_1);

        HexButton_1 = new QRadioButton(layoutWidget2);
        HexButton_1->setObjectName(QStringLiteral("HexButton_1"));
        HexButton_1->setMinimumSize(QSize(70, 20));
        HexButton_1->setTabletTracking(false);
        HexButton_1->setChecked(true);

        horizontalLayout_2->addWidget(HexButton_1);

        layoutWidget3 = new QWidget(ReceiveSettingGroupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 50, 73, 74));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        AutocheckBox = new QCheckBox(layoutWidget3);
        AutocheckBox->setObjectName(QStringLiteral("AutocheckBox"));
        AutocheckBox->setMinimumSize(QSize(70, 20));

        verticalLayout_3->addWidget(AutocheckBox);

        ShowsendcheckBox = new QCheckBox(layoutWidget3);
        ShowsendcheckBox->setObjectName(QStringLiteral("ShowsendcheckBox"));
        ShowsendcheckBox->setMinimumSize(QSize(70, 20));

        verticalLayout_3->addWidget(ShowsendcheckBox);

        ShowtimecheckBox = new QCheckBox(layoutWidget3);
        ShowtimecheckBox->setObjectName(QStringLiteral("ShowtimecheckBox"));
        ShowtimecheckBox->setMinimumSize(QSize(70, 20));

        verticalLayout_3->addWidget(ShowtimecheckBox);


        verticalLayout_4->addWidget(ReceiveSettingGroupBox);

        SendSettingGroupBox = new QGroupBox(layoutWidget);
        SendSettingGroupBox->setObjectName(QStringLiteral("SendSettingGroupBox"));
        SendSettingGroupBox->setMinimumSize(QSize(180, 85));
        layoutWidget4 = new QWidget(SendSettingGroupBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 148, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        AsciiButton_2 = new QRadioButton(layoutWidget4);
        AsciiButton_2->setObjectName(QStringLiteral("AsciiButton_2"));
        AsciiButton_2->setMinimumSize(QSize(70, 20));

        horizontalLayout_3->addWidget(AsciiButton_2);

        HexButton_2 = new QRadioButton(layoutWidget4);
        HexButton_2->setObjectName(QStringLiteral("HexButton_2"));
        HexButton_2->setMinimumSize(QSize(70, 20));
        HexButton_2->setChecked(true);

        horizontalLayout_3->addWidget(HexButton_2);

        layoutWidget5 = new QWidget(SendSettingGroupBox);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 50, 159, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        sendCheckBox = new QCheckBox(layoutWidget5);
        sendCheckBox->setObjectName(QStringLiteral("sendCheckBox"));
        sendCheckBox->setMinimumSize(QSize(70, 20));

        horizontalLayout_4->addWidget(sendCheckBox);

        timespinBox = new QSpinBox(layoutWidget5);
        timespinBox->setObjectName(QStringLiteral("timespinBox"));
        timespinBox->setMinimumSize(QSize(80, 20));

        horizontalLayout_4->addWidget(timespinBox);


        verticalLayout_4->addWidget(SendSettingGroupBox);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        editMenu = new QMenu(menuBar);
        editMenu->setObjectName(QStringLiteral("editMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QStringLiteral("helpMenu"));
        MainWindowClass->setMenuBar(menuBar);

        mainToolBar->addAction(saveAction);
        mainToolBar->addAction(quitAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(startAction);
        mainToolBar->addAction(pauseAction);
        mainToolBar->addAction(stopAction);
        mainToolBar->addAction(clearAction);
        mainToolBar->addAction(action);
        mainToolBar->addSeparator();
        mainToolBar->addAction(aboutAction);
        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(editMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(saveAction);
        fileMenu->addAction(quitAction);
        editMenu->addAction(startAction);
        editMenu->addAction(pauseAction);
        editMenu->addAction(stopAction);
        editMenu->addAction(clearAction);
        editMenu->addAction(action);
        helpMenu->addAction(aboutAction);

        retranslateUi(MainWindowClass);

        baudrateComboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "SerialAssisants", Q_NULLPTR));
        saveAction->setText(QApplication::translate("MainWindowClass", "\344\277\235\345\255\230", Q_NULLPTR));
        quitAction->setText(QApplication::translate("MainWindowClass", "\351\200\200\345\207\272", Q_NULLPTR));
        startAction->setText(QApplication::translate("MainWindowClass", "\345\274\200\345\247\213", Q_NULLPTR));
        pauseAction->setText(QApplication::translate("MainWindowClass", "\346\232\202\345\201\234", Q_NULLPTR));
        stopAction->setText(QApplication::translate("MainWindowClass", "\345\201\234\346\255\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stopAction->setToolTip(QApplication::translate("MainWindowClass", "\345\201\234\346\255\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        aboutAction->setText(QApplication::translate("MainWindowClass", "\345\205\263\344\272\216", Q_NULLPTR));
        clearAction->setText(QApplication::translate("MainWindowClass", "\346\270\205\351\231\244", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindowClass", "\345\210\267\346\226\260\344\270\262\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("MainWindowClass", "\350\216\267\345\217\226\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SendButton->setText(QApplication::translate("MainWindowClass", "\345\217\221\351\200\201", Q_NULLPTR));
        SerialSettingGroupBox->setTitle(QApplication::translate("MainWindowClass", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        SerialLabel->setText(QApplication::translate("MainWindowClass", "\347\253\257\345\217\243", Q_NULLPTR));
        baudrateLabel->setText(QApplication::translate("MainWindowClass", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        databitLabel->setText(QApplication::translate("MainWindowClass", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        checkbitLabel->setText(QApplication::translate("MainWindowClass", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        stopbitLabel->setText(QApplication::translate("MainWindowClass", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        flowcontrolLabel->setText(QApplication::translate("MainWindowClass", "\346\265\201\346\216\247", Q_NULLPTR));
        baudrateComboBox->clear();
        baudrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "230400", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "460800", Q_NULLPTR)
        );
        databitComboBox->clear();
        databitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "8", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "7", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "6", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "5", Q_NULLPTR)
        );
        checkbitComboBox->clear();
        checkbitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "None", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Even", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Odd", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Mark", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Space", Q_NULLPTR)
        );
        stopbitComboBox->clear();
        stopbitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "2", Q_NULLPTR)
        );
        flowcontrolComboBox->clear();
        flowcontrolComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "None", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "RTS/CTS", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "XON/XOFF", Q_NULLPTR)
        );
        ReceiveSettingGroupBox->setTitle(QApplication::translate("MainWindowClass", "\346\216\245\346\224\266\350\256\276\347\275\256", Q_NULLPTR));
        AsciiButton_1->setText(QApplication::translate("MainWindowClass", "ASCII", Q_NULLPTR));
        HexButton_1->setText(QApplication::translate("MainWindowClass", "HEX", Q_NULLPTR));
        AutocheckBox->setText(QApplication::translate("MainWindowClass", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        ShowsendcheckBox->setText(QApplication::translate("MainWindowClass", "\346\230\276\347\244\272\345\217\221\351\200\201", Q_NULLPTR));
        ShowtimecheckBox->setText(QApplication::translate("MainWindowClass", "\346\230\276\347\244\272\346\227\266\351\227\264", Q_NULLPTR));
        SendSettingGroupBox->setTitle(QApplication::translate("MainWindowClass", "\345\217\221\351\200\201\350\256\276\347\275\256", Q_NULLPTR));
        AsciiButton_2->setText(QApplication::translate("MainWindowClass", "ASCII", Q_NULLPTR));
        HexButton_2->setText(QApplication::translate("MainWindowClass", "HEX", Q_NULLPTR));
        sendCheckBox->setText(QApplication::translate("MainWindowClass", "\345\256\232\346\227\266\345\217\221\351\200\201", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindowClass", "toolBar", Q_NULLPTR));
        fileMenu->setTitle(QApplication::translate("MainWindowClass", "\346\226\207\344\273\266", Q_NULLPTR));
        editMenu->setTitle(QApplication::translate("MainWindowClass", "\347\274\226\350\276\221", Q_NULLPTR));
        helpMenu->setTitle(QApplication::translate("MainWindowClass", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
