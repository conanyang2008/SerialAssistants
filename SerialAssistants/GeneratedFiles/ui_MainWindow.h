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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *SerialSettingGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *SerialLabel;
    QComboBox *SerialComboBox;
    QLabel *baudrateLabel;
    QComboBox *baudrateComboBox;
    QLabel *databitLabel;
    QComboBox *databitComboBox;
    QLabel *checkbitLabel;
    QComboBox *checkbitComboBox;
    QLabel *stopbitLabel;
    QComboBox *stopbitComboBox;
    QLabel *flowcontrolLabel;
    QComboBox *flowcontrolComboBox;
    QGroupBox *ReceiveSettingGroupBox;
    QGridLayout *gridLayout_5;
    QRadioButton *AsciiButton_1;
    QRadioButton *HexButton_1;
    QCheckBox *AutocheckBox;
    QCheckBox *ShowsendcheckBox;
    QCheckBox *ShowtimecheckBox;
    QGroupBox *SendSettingGroupBox;
    QGridLayout *gridLayout_4;
    QRadioButton *AsciiButton_2;
    QRadioButton *HexButton_2;
    QCheckBox *sendCheckBox;
    QSpinBox *timespinBox;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QTextEdit *SendTextEdit;
    QPushButton *SendButton;
    QTextEdit *ReceiveTextEdit;
    QComboBox *comboBox;
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
        MainWindowClass->resize(800, 601);
        MainWindowClass->setMinimumSize(QSize(800, 600));
        MainWindowClass->setMaximumSize(QSize(16777215, 16777215));
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
        stopAction->setChecked(true);
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
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        SerialSettingGroupBox = new QGroupBox(centralWidget);
        SerialSettingGroupBox->setObjectName(QStringLiteral("SerialSettingGroupBox"));
        SerialSettingGroupBox->setMinimumSize(QSize(219, 220));
        SerialSettingGroupBox->setMaximumSize(QSize(219, 220));
        gridLayout_2 = new QGridLayout(SerialSettingGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        SerialLabel = new QLabel(SerialSettingGroupBox);
        SerialLabel->setObjectName(QStringLiteral("SerialLabel"));
        SerialLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(SerialLabel, 0, 0, 1, 1);

        SerialComboBox = new QComboBox(SerialSettingGroupBox);
        SerialComboBox->setObjectName(QStringLiteral("SerialComboBox"));
        SerialComboBox->setMinimumSize(QSize(150, 20));

        gridLayout_2->addWidget(SerialComboBox, 0, 1, 1, 1);

        baudrateLabel = new QLabel(SerialSettingGroupBox);
        baudrateLabel->setObjectName(QStringLiteral("baudrateLabel"));
        baudrateLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(baudrateLabel, 1, 0, 1, 1);

        baudrateComboBox = new QComboBox(SerialSettingGroupBox);
        baudrateComboBox->setObjectName(QStringLiteral("baudrateComboBox"));
        baudrateComboBox->setMinimumSize(QSize(150, 20));

        gridLayout_2->addWidget(baudrateComboBox, 1, 1, 1, 1);

        databitLabel = new QLabel(SerialSettingGroupBox);
        databitLabel->setObjectName(QStringLiteral("databitLabel"));
        databitLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(databitLabel, 2, 0, 1, 1);

        databitComboBox = new QComboBox(SerialSettingGroupBox);
        databitComboBox->setObjectName(QStringLiteral("databitComboBox"));
        databitComboBox->setMinimumSize(QSize(150, 20));

        gridLayout_2->addWidget(databitComboBox, 2, 1, 1, 1);

        checkbitLabel = new QLabel(SerialSettingGroupBox);
        checkbitLabel->setObjectName(QStringLiteral("checkbitLabel"));
        checkbitLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(checkbitLabel, 3, 0, 1, 1);

        checkbitComboBox = new QComboBox(SerialSettingGroupBox);
        checkbitComboBox->setObjectName(QStringLiteral("checkbitComboBox"));
        checkbitComboBox->setMinimumSize(QSize(150, 20));

        gridLayout_2->addWidget(checkbitComboBox, 3, 1, 1, 1);

        stopbitLabel = new QLabel(SerialSettingGroupBox);
        stopbitLabel->setObjectName(QStringLiteral("stopbitLabel"));
        stopbitLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(stopbitLabel, 4, 0, 1, 1);

        stopbitComboBox = new QComboBox(SerialSettingGroupBox);
        stopbitComboBox->setObjectName(QStringLiteral("stopbitComboBox"));
        stopbitComboBox->setMinimumSize(QSize(150, 20));

        gridLayout_2->addWidget(stopbitComboBox, 4, 1, 1, 1);

        flowcontrolLabel = new QLabel(SerialSettingGroupBox);
        flowcontrolLabel->setObjectName(QStringLiteral("flowcontrolLabel"));
        flowcontrolLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(flowcontrolLabel, 5, 0, 1, 1);

        flowcontrolComboBox = new QComboBox(SerialSettingGroupBox);
        flowcontrolComboBox->setObjectName(QStringLiteral("flowcontrolComboBox"));
        flowcontrolComboBox->setMinimumSize(QSize(150, 20));

        gridLayout_2->addWidget(flowcontrolComboBox, 5, 1, 1, 1);


        verticalLayout_4->addWidget(SerialSettingGroupBox);

        ReceiveSettingGroupBox = new QGroupBox(centralWidget);
        ReceiveSettingGroupBox->setObjectName(QStringLiteral("ReceiveSettingGroupBox"));
        ReceiveSettingGroupBox->setMinimumSize(QSize(219, 135));
        ReceiveSettingGroupBox->setMaximumSize(QSize(219, 135));
        gridLayout_5 = new QGridLayout(ReceiveSettingGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        AsciiButton_1 = new QRadioButton(ReceiveSettingGroupBox);
        AsciiButton_1->setObjectName(QStringLiteral("AsciiButton_1"));
        AsciiButton_1->setMinimumSize(QSize(70, 20));

        gridLayout_5->addWidget(AsciiButton_1, 0, 0, 1, 1);

        HexButton_1 = new QRadioButton(ReceiveSettingGroupBox);
        HexButton_1->setObjectName(QStringLiteral("HexButton_1"));
        HexButton_1->setMinimumSize(QSize(70, 20));
        HexButton_1->setTabletTracking(false);
        HexButton_1->setChecked(true);

        gridLayout_5->addWidget(HexButton_1, 0, 1, 1, 1);

        AutocheckBox = new QCheckBox(ReceiveSettingGroupBox);
        AutocheckBox->setObjectName(QStringLiteral("AutocheckBox"));
        AutocheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_5->addWidget(AutocheckBox, 1, 0, 1, 1);

        ShowsendcheckBox = new QCheckBox(ReceiveSettingGroupBox);
        ShowsendcheckBox->setObjectName(QStringLiteral("ShowsendcheckBox"));
        ShowsendcheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_5->addWidget(ShowsendcheckBox, 2, 0, 1, 1);

        ShowtimecheckBox = new QCheckBox(ReceiveSettingGroupBox);
        ShowtimecheckBox->setObjectName(QStringLiteral("ShowtimecheckBox"));
        ShowtimecheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_5->addWidget(ShowtimecheckBox, 3, 0, 1, 1);


        verticalLayout_4->addWidget(ReceiveSettingGroupBox);

        SendSettingGroupBox = new QGroupBox(centralWidget);
        SendSettingGroupBox->setObjectName(QStringLiteral("SendSettingGroupBox"));
        SendSettingGroupBox->setMinimumSize(QSize(219, 85));
        SendSettingGroupBox->setMaximumSize(QSize(219, 85));
        gridLayout_4 = new QGridLayout(SendSettingGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        AsciiButton_2 = new QRadioButton(SendSettingGroupBox);
        AsciiButton_2->setObjectName(QStringLiteral("AsciiButton_2"));
        AsciiButton_2->setMinimumSize(QSize(70, 20));

        gridLayout_4->addWidget(AsciiButton_2, 0, 0, 1, 1);

        HexButton_2 = new QRadioButton(SendSettingGroupBox);
        HexButton_2->setObjectName(QStringLiteral("HexButton_2"));
        HexButton_2->setMinimumSize(QSize(70, 20));
        HexButton_2->setChecked(true);

        gridLayout_4->addWidget(HexButton_2, 0, 1, 1, 1);

        sendCheckBox = new QCheckBox(SendSettingGroupBox);
        sendCheckBox->setObjectName(QStringLiteral("sendCheckBox"));
        sendCheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_4->addWidget(sendCheckBox, 1, 0, 1, 1);

        timespinBox = new QSpinBox(SendSettingGroupBox);
        timespinBox->setObjectName(QStringLiteral("timespinBox"));
        timespinBox->setMinimumSize(QSize(80, 20));
        timespinBox->setMinimum(10);
        timespinBox->setMaximum(10000);
        timespinBox->setSingleStep(10);
        timespinBox->setValue(1000);
        timespinBox->setDisplayIntegerBase(10);

        gridLayout_4->addWidget(timespinBox, 1, 1, 1, 1);


        verticalLayout_4->addWidget(SendSettingGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        SendTextEdit = new QTextEdit(centralWidget);
        SendTextEdit->setObjectName(QStringLiteral("SendTextEdit"));
        SendTextEdit->setMinimumSize(QSize(450, 60));
        SendTextEdit->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        SendTextEdit->setFont(font);

        gridLayout->addWidget(SendTextEdit, 1, 0, 1, 1);

        SendButton = new QPushButton(centralWidget);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setMinimumSize(QSize(60, 60));
        SendButton->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(SendButton, 1, 1, 1, 1);

        ReceiveTextEdit = new QTextEdit(centralWidget);
        ReceiveTextEdit->setObjectName(QStringLiteral("ReceiveTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReceiveTextEdit->sizePolicy().hasHeightForWidth());
        ReceiveTextEdit->setSizePolicy(sizePolicy);
        ReceiveTextEdit->setMinimumSize(QSize(550, 400));
        ReceiveTextEdit->setFont(font);
        ReceiveTextEdit->setTabChangesFocus(false);
        ReceiveTextEdit->setReadOnly(true);

        gridLayout->addWidget(ReceiveTextEdit, 0, 0, 1, 2);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(550, 20));
        comboBox->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        comboBox->setFont(font1);
        comboBox->setMaxVisibleItems(5);

        gridLayout->addWidget(comboBox, 2, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

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
        editMenu->addSeparator();
        editMenu->addAction(action);
        helpMenu->addAction(aboutAction);

        retranslateUi(MainWindowClass);

        baudrateComboBox->setCurrentIndex(7);


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
        SerialSettingGroupBox->setTitle(QApplication::translate("MainWindowClass", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        SerialLabel->setText(QApplication::translate("MainWindowClass", "\347\253\257\345\217\243", Q_NULLPTR));
        baudrateLabel->setText(QApplication::translate("MainWindowClass", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baudrateComboBox->clear();
        baudrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1200", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "115200", Q_NULLPTR)
        );
        databitLabel->setText(QApplication::translate("MainWindowClass", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        databitComboBox->clear();
        databitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "8", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "7", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "6", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "5", Q_NULLPTR)
        );
        checkbitLabel->setText(QApplication::translate("MainWindowClass", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        checkbitComboBox->clear();
        checkbitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "None", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Even", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Odd", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Mark", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "Space", Q_NULLPTR)
        );
        stopbitLabel->setText(QApplication::translate("MainWindowClass", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        stopbitComboBox->clear();
        stopbitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindowClass", "2", Q_NULLPTR)
        );
        flowcontrolLabel->setText(QApplication::translate("MainWindowClass", "\346\265\201\346\216\247", Q_NULLPTR));
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
        SendButton->setText(QApplication::translate("MainWindowClass", "\345\217\221\351\200\201", Q_NULLPTR));
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
