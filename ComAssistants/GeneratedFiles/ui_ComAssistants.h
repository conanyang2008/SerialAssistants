/********************************************************************************
** Form generated from reading UI file 'ComAssistants.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMASSISTANTS_H
#define UI_COMASSISTANTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComAssistantsClass
{
public:
    QAction *action;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_10;
    QTabWidget *tabWidget;
    QWidget *serialTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *SerialSettingGroupBox;
    QGridLayout *gridLayout_6;
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *openButton;
    QGroupBox *ReceiveSettingGroupBox;
    QGridLayout *gridLayout_5;
    QRadioButton *AsciiButton_1;
    QRadioButton *HexButton_1;
    QCheckBox *AutocheckBox;
    QCheckBox *ShowsendcheckBox;
    QCheckBox *ShowtimecheckBox;
    QGroupBox *SendSettingGroupBox;
    QGridLayout *gridLayout_4;
    QCheckBox *sendCheckBox;
    QRadioButton *AsciiButton_2;
    QSpinBox *timespinBox;
    QCheckBox *checkBoxDTR;
    QCheckBox *checkBoxRTS;
    QRadioButton *HexButton_2;
    QFrame *line;
    QPushButton *clear;
    QPushButton *shuaxin;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxRev;
    QGridLayout *gridLayout_3;
    QTextEdit *ReceiveTextEdit;
    QGroupBox *groupBoxSend;
    QGridLayout *gridLayout_7;
    QTextEdit *SendTextEdit;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *labelRev;
    QLabel *labelSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton2;
    QPushButton *sendButton1;
    QWidget *serverTab;
    QWidget *clientTab;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *serverIPBOX;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pingButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *tcpClientBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_8;
    QLabel *tcpLocalLabel;
    QLineEdit *tcpPort1;
    QLabel *tcpTargetLabel;
    QLineEdit *tcpPort2;
    QGroupBox *udpBox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_9;
    QLabel *udpLocalLabel;
    QLineEdit *udpPort1;
    QLabel *udpTargetLabel;
    QLineEdit *udpPort2;
    QGroupBox *tcpClientAssistBox;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_11;
    QLabel *tcpStatus;
    QPushButton *openTcpClient;
    QCheckBox *clientHexSend;
    QLabel *udpStatus;
    QPushButton *openUdp;
    QCheckBox *clientHexRev;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBox_6;
    QPushButton *clearUdp;
    QPushButton *clearTcpClient;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_3;
    QSpinBox *tcpClientspinBox;
    QSpinBox *udpspinBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *tcpClientRevBox;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *tcpCRevLabel;
    QLabel *tcpCSendLabel;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *tcpClientRevtextEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *udpRevLabel;
    QLabel *udpSendLabel;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *udpRevtextEdit;
    QGroupBox *tcpClientSendBox;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QTextEdit *tcpClientSendtextEdit;
    QComboBox *tcpCLastSendComboBox;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *tcpClientSendButton;
    QPushButton *udpSendButton;
    QPushButton *pushButton_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ComAssistantsClass)
    {
        if (ComAssistantsClass->objectName().isEmpty())
            ComAssistantsClass->setObjectName(QStringLiteral("ComAssistantsClass"));
        ComAssistantsClass->resize(877, 626);
        action = new QAction(ComAssistantsClass);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(ComAssistantsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_10 = new QVBoxLayout(centralWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        serialTab = new QWidget();
        serialTab->setObjectName(QStringLiteral("serialTab"));
        verticalLayout_4 = new QVBoxLayout(serialTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        SerialSettingGroupBox = new QGroupBox(serialTab);
        SerialSettingGroupBox->setObjectName(QStringLiteral("SerialSettingGroupBox"));
        SerialSettingGroupBox->setMinimumSize(QSize(100, 100));
        SerialSettingGroupBox->setMaximumSize(QSize(176, 220));
        gridLayout_6 = new QGridLayout(SerialSettingGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        SerialLabel = new QLabel(SerialSettingGroupBox);
        SerialLabel->setObjectName(QStringLiteral("SerialLabel"));
        SerialLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(SerialLabel, 0, 0, 1, 1);

        SerialComboBox = new QComboBox(SerialSettingGroupBox);
        SerialComboBox->setObjectName(QStringLiteral("SerialComboBox"));
        SerialComboBox->setMinimumSize(QSize(100, 20));

        gridLayout_2->addWidget(SerialComboBox, 0, 1, 1, 1);

        baudrateLabel = new QLabel(SerialSettingGroupBox);
        baudrateLabel->setObjectName(QStringLiteral("baudrateLabel"));
        baudrateLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(baudrateLabel, 1, 0, 1, 1);

        baudrateComboBox = new QComboBox(SerialSettingGroupBox);
        baudrateComboBox->setObjectName(QStringLiteral("baudrateComboBox"));
        baudrateComboBox->setMinimumSize(QSize(100, 20));

        gridLayout_2->addWidget(baudrateComboBox, 1, 1, 1, 1);

        databitLabel = new QLabel(SerialSettingGroupBox);
        databitLabel->setObjectName(QStringLiteral("databitLabel"));
        databitLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(databitLabel, 2, 0, 1, 1);

        databitComboBox = new QComboBox(SerialSettingGroupBox);
        databitComboBox->setObjectName(QStringLiteral("databitComboBox"));
        databitComboBox->setMinimumSize(QSize(100, 20));

        gridLayout_2->addWidget(databitComboBox, 2, 1, 1, 1);

        checkbitLabel = new QLabel(SerialSettingGroupBox);
        checkbitLabel->setObjectName(QStringLiteral("checkbitLabel"));
        checkbitLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(checkbitLabel, 3, 0, 1, 1);

        checkbitComboBox = new QComboBox(SerialSettingGroupBox);
        checkbitComboBox->setObjectName(QStringLiteral("checkbitComboBox"));
        checkbitComboBox->setMinimumSize(QSize(100, 20));

        gridLayout_2->addWidget(checkbitComboBox, 3, 1, 1, 1);

        stopbitLabel = new QLabel(SerialSettingGroupBox);
        stopbitLabel->setObjectName(QStringLiteral("stopbitLabel"));
        stopbitLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(stopbitLabel, 4, 0, 1, 1);

        stopbitComboBox = new QComboBox(SerialSettingGroupBox);
        stopbitComboBox->setObjectName(QStringLiteral("stopbitComboBox"));
        stopbitComboBox->setMinimumSize(QSize(100, 20));

        gridLayout_2->addWidget(stopbitComboBox, 4, 1, 1, 1);

        flowcontrolLabel = new QLabel(SerialSettingGroupBox);
        flowcontrolLabel->setObjectName(QStringLiteral("flowcontrolLabel"));
        flowcontrolLabel->setMinimumSize(QSize(35, 20));

        gridLayout_2->addWidget(flowcontrolLabel, 5, 0, 1, 1);

        flowcontrolComboBox = new QComboBox(SerialSettingGroupBox);
        flowcontrolComboBox->setObjectName(QStringLiteral("flowcontrolComboBox"));
        flowcontrolComboBox->setMinimumSize(QSize(100, 20));

        gridLayout_2->addWidget(flowcontrolComboBox, 5, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(SerialSettingGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        openButton = new QPushButton(SerialSettingGroupBox);
        openButton->setObjectName(QStringLiteral("openButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openButton->sizePolicy().hasHeightForWidth());
        openButton->setSizePolicy(sizePolicy);
        openButton->setMouseTracking(false);
        openButton->setContextMenuPolicy(Qt::NoContextMenu);
        openButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(openButton);


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout_3->addWidget(SerialSettingGroupBox);

        ReceiveSettingGroupBox = new QGroupBox(serialTab);
        ReceiveSettingGroupBox->setObjectName(QStringLiteral("ReceiveSettingGroupBox"));
        ReceiveSettingGroupBox->setMinimumSize(QSize(100, 20));
        ReceiveSettingGroupBox->setMaximumSize(QSize(176, 135));
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

        gridLayout_5->addWidget(AutocheckBox, 1, 0, 1, 2);

        ShowsendcheckBox = new QCheckBox(ReceiveSettingGroupBox);
        ShowsendcheckBox->setObjectName(QStringLiteral("ShowsendcheckBox"));
        ShowsendcheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_5->addWidget(ShowsendcheckBox, 2, 0, 1, 2);

        ShowtimecheckBox = new QCheckBox(ReceiveSettingGroupBox);
        ShowtimecheckBox->setObjectName(QStringLiteral("ShowtimecheckBox"));
        ShowtimecheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_5->addWidget(ShowtimecheckBox, 3, 0, 1, 2);


        verticalLayout_3->addWidget(ReceiveSettingGroupBox);

        SendSettingGroupBox = new QGroupBox(serialTab);
        SendSettingGroupBox->setObjectName(QStringLiteral("SendSettingGroupBox"));
        SendSettingGroupBox->setMinimumSize(QSize(100, 50));
        SendSettingGroupBox->setMaximumSize(QSize(176, 200));
        gridLayout_4 = new QGridLayout(SendSettingGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        sendCheckBox = new QCheckBox(SendSettingGroupBox);
        sendCheckBox->setObjectName(QStringLiteral("sendCheckBox"));
        sendCheckBox->setMinimumSize(QSize(70, 20));

        gridLayout_4->addWidget(sendCheckBox, 1, 0, 1, 1);

        AsciiButton_2 = new QRadioButton(SendSettingGroupBox);
        AsciiButton_2->setObjectName(QStringLiteral("AsciiButton_2"));
        AsciiButton_2->setMinimumSize(QSize(70, 20));

        gridLayout_4->addWidget(AsciiButton_2, 0, 0, 1, 1);

        timespinBox = new QSpinBox(SendSettingGroupBox);
        timespinBox->setObjectName(QStringLiteral("timespinBox"));
        timespinBox->setMinimumSize(QSize(50, 20));
        timespinBox->setMinimum(10);
        timespinBox->setMaximum(10000);
        timespinBox->setSingleStep(10);
        timespinBox->setValue(1000);
        timespinBox->setDisplayIntegerBase(10);

        gridLayout_4->addWidget(timespinBox, 1, 1, 1, 1);

        checkBoxDTR = new QCheckBox(SendSettingGroupBox);
        checkBoxDTR->setObjectName(QStringLiteral("checkBoxDTR"));

        gridLayout_4->addWidget(checkBoxDTR, 3, 0, 1, 1);

        checkBoxRTS = new QCheckBox(SendSettingGroupBox);
        checkBoxRTS->setObjectName(QStringLiteral("checkBoxRTS"));

        gridLayout_4->addWidget(checkBoxRTS, 3, 1, 1, 1);

        HexButton_2 = new QRadioButton(SendSettingGroupBox);
        HexButton_2->setObjectName(QStringLiteral("HexButton_2"));
        HexButton_2->setMinimumSize(QSize(70, 20));
        HexButton_2->setChecked(true);

        gridLayout_4->addWidget(HexButton_2, 0, 1, 1, 1);

        line = new QFrame(SendSettingGroupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 2, 0, 1, 2);

        clear = new QPushButton(SendSettingGroupBox);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setMinimumSize(QSize(0, 22));

        gridLayout_4->addWidget(clear, 4, 1, 1, 1);

        shuaxin = new QPushButton(SendSettingGroupBox);
        shuaxin->setObjectName(QStringLiteral("shuaxin"));
        shuaxin->setMinimumSize(QSize(0, 22));

        gridLayout_4->addWidget(shuaxin, 4, 0, 1, 1);


        verticalLayout_3->addWidget(SendSettingGroupBox);

        verticalSpacer = new QSpacerItem(128, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBoxRev = new QGroupBox(serialTab);
        groupBoxRev->setObjectName(QStringLiteral("groupBoxRev"));
        gridLayout_3 = new QGridLayout(groupBoxRev);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ReceiveTextEdit = new QTextEdit(groupBoxRev);
        ReceiveTextEdit->setObjectName(QStringLiteral("ReceiveTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ReceiveTextEdit->sizePolicy().hasHeightForWidth());
        ReceiveTextEdit->setSizePolicy(sizePolicy1);
        ReceiveTextEdit->setMinimumSize(QSize(400, 300));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        ReceiveTextEdit->setFont(font);
        ReceiveTextEdit->setTabChangesFocus(false);
        ReceiveTextEdit->setReadOnly(true);

        gridLayout_3->addWidget(ReceiveTextEdit, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxRev);

        groupBoxSend = new QGroupBox(serialTab);
        groupBoxSend->setObjectName(QStringLiteral("groupBoxSend"));
        groupBoxSend->setMaximumSize(QSize(16777215, 155));
        gridLayout_7 = new QGridLayout(groupBoxSend);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(8);
        SendTextEdit = new QTextEdit(groupBoxSend);
        SendTextEdit->setObjectName(QStringLiteral("SendTextEdit"));
        SendTextEdit->setMinimumSize(QSize(300, 63));
        SendTextEdit->setMaximumSize(QSize(16777215, 70));
        SendTextEdit->setFont(font);

        gridLayout_7->addWidget(SendTextEdit, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBoxSend);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(300, 20));
        comboBox->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        comboBox->setFont(font1);
        comboBox->setMaxVisibleItems(5);

        gridLayout_7->addWidget(comboBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelRev = new QLabel(groupBoxSend);
        labelRev->setObjectName(QStringLiteral("labelRev"));
        labelRev->setMinimumSize(QSize(100, 0));
        labelRev->setMaximumSize(QSize(16777215, 23));

        horizontalLayout->addWidget(labelRev);

        labelSend = new QLabel(groupBoxSend);
        labelSend->setObjectName(QStringLiteral("labelSend"));
        labelSend->setMinimumSize(QSize(100, 0));
        labelSend->setMaximumSize(QSize(16777215, 23));

        horizontalLayout->addWidget(labelSend);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton2 = new QPushButton(groupBoxSend);
        sendButton2->setObjectName(QStringLiteral("sendButton2"));
        sendButton2->setMaximumSize(QSize(16777215, 23));

        horizontalLayout->addWidget(sendButton2);

        sendButton1 = new QPushButton(groupBoxSend);
        sendButton1->setObjectName(QStringLiteral("sendButton1"));
        sendButton1->setMaximumSize(QSize(16777215, 23));

        horizontalLayout->addWidget(sendButton1);


        gridLayout_7->addLayout(horizontalLayout, 2, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxSend);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        tabWidget->addTab(serialTab, QString());
        serverTab = new QWidget();
        serverTab->setObjectName(QStringLiteral("serverTab"));
        tabWidget->addTab(serverTab, QString());
        clientTab = new QWidget();
        clientTab->setObjectName(QStringLiteral("clientTab"));
        verticalLayout_15 = new QVBoxLayout(clientTab);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        serverIPBOX = new QGroupBox(clientTab);
        serverIPBOX->setObjectName(QStringLiteral("serverIPBOX"));
        serverIPBOX->setMinimumSize(QSize(176, 0));
        serverIPBOX->setMaximumSize(QSize(176, 16777215));
        verticalLayout = new QVBoxLayout(serverIPBOX);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(serverIPBOX);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(176, 16777215));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pingButton = new QPushButton(serverIPBOX);
        pingButton->setObjectName(QStringLiteral("pingButton"));

        horizontalLayout_4->addWidget(pingButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_8->addWidget(serverIPBOX);

        tcpClientBox = new QGroupBox(clientTab);
        tcpClientBox->setObjectName(QStringLiteral("tcpClientBox"));
        tcpClientBox->setMinimumSize(QSize(176, 0));
        tcpClientBox->setMaximumSize(QSize(176, 16777215));
        verticalLayout_5 = new QVBoxLayout(tcpClientBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tcpLocalLabel = new QLabel(tcpClientBox);
        tcpLocalLabel->setObjectName(QStringLiteral("tcpLocalLabel"));

        gridLayout_8->addWidget(tcpLocalLabel, 0, 0, 1, 1);

        tcpPort1 = new QLineEdit(tcpClientBox);
        tcpPort1->setObjectName(QStringLiteral("tcpPort1"));
        tcpPort1->setReadOnly(true);

        gridLayout_8->addWidget(tcpPort1, 0, 1, 1, 1);

        tcpTargetLabel = new QLabel(tcpClientBox);
        tcpTargetLabel->setObjectName(QStringLiteral("tcpTargetLabel"));

        gridLayout_8->addWidget(tcpTargetLabel, 1, 0, 1, 1);

        tcpPort2 = new QLineEdit(tcpClientBox);
        tcpPort2->setObjectName(QStringLiteral("tcpPort2"));

        gridLayout_8->addWidget(tcpPort2, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_8);


        verticalLayout_8->addWidget(tcpClientBox);

        udpBox = new QGroupBox(clientTab);
        udpBox->setObjectName(QStringLiteral("udpBox"));
        udpBox->setMinimumSize(QSize(176, 0));
        udpBox->setMaximumSize(QSize(176, 16777215));
        verticalLayout_6 = new QVBoxLayout(udpBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        udpLocalLabel = new QLabel(udpBox);
        udpLocalLabel->setObjectName(QStringLiteral("udpLocalLabel"));

        gridLayout_9->addWidget(udpLocalLabel, 0, 0, 1, 1);

        udpPort1 = new QLineEdit(udpBox);
        udpPort1->setObjectName(QStringLiteral("udpPort1"));

        gridLayout_9->addWidget(udpPort1, 0, 1, 1, 1);

        udpTargetLabel = new QLabel(udpBox);
        udpTargetLabel->setObjectName(QStringLiteral("udpTargetLabel"));

        gridLayout_9->addWidget(udpTargetLabel, 1, 0, 1, 1);

        udpPort2 = new QLineEdit(udpBox);
        udpPort2->setObjectName(QStringLiteral("udpPort2"));

        gridLayout_9->addWidget(udpPort2, 1, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_9);


        verticalLayout_8->addWidget(udpBox);

        tcpClientAssistBox = new QGroupBox(clientTab);
        tcpClientAssistBox->setObjectName(QStringLiteral("tcpClientAssistBox"));
        tcpClientAssistBox->setMinimumSize(QSize(176, 0));
        tcpClientAssistBox->setMaximumSize(QSize(176, 16777215));
        verticalLayout_7 = new QVBoxLayout(tcpClientAssistBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        tcpStatus = new QLabel(tcpClientAssistBox);
        tcpStatus->setObjectName(QStringLiteral("tcpStatus"));

        gridLayout_11->addWidget(tcpStatus, 0, 0, 1, 1);

        openTcpClient = new QPushButton(tcpClientAssistBox);
        openTcpClient->setObjectName(QStringLiteral("openTcpClient"));

        gridLayout_11->addWidget(openTcpClient, 0, 1, 1, 1);

        clientHexSend = new QCheckBox(tcpClientAssistBox);
        clientHexSend->setObjectName(QStringLiteral("clientHexSend"));
        clientHexSend->setTabletTracking(false);
        clientHexSend->setChecked(false);

        gridLayout_11->addWidget(clientHexSend, 0, 2, 1, 1);

        udpStatus = new QLabel(tcpClientAssistBox);
        udpStatus->setObjectName(QStringLiteral("udpStatus"));

        gridLayout_11->addWidget(udpStatus, 1, 0, 1, 1);

        openUdp = new QPushButton(tcpClientAssistBox);
        openUdp->setObjectName(QStringLiteral("openUdp"));

        gridLayout_11->addWidget(openUdp, 1, 1, 1, 1);

        clientHexRev = new QCheckBox(tcpClientAssistBox);
        clientHexRev->setObjectName(QStringLiteral("clientHexRev"));
        clientHexRev->setChecked(false);

        gridLayout_11->addWidget(clientHexRev, 1, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_11);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        checkBox_6 = new QCheckBox(tcpClientAssistBox);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout_10->addWidget(checkBox_6, 2, 1, 1, 1);

        clearUdp = new QPushButton(tcpClientAssistBox);
        clearUdp->setObjectName(QStringLiteral("clearUdp"));

        gridLayout_10->addWidget(clearUdp, 3, 1, 1, 1);

        clearTcpClient = new QPushButton(tcpClientAssistBox);
        clearTcpClient->setObjectName(QStringLiteral("clearTcpClient"));

        gridLayout_10->addWidget(clearTcpClient, 3, 0, 1, 1);

        checkBox_4 = new QCheckBox(tcpClientAssistBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_10->addWidget(checkBox_4, 1, 0, 1, 1);

        checkBox_5 = new QCheckBox(tcpClientAssistBox);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout_10->addWidget(checkBox_5, 2, 0, 1, 1);

        checkBox_3 = new QCheckBox(tcpClientAssistBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_10->addWidget(checkBox_3, 0, 0, 1, 1);

        tcpClientspinBox = new QSpinBox(tcpClientAssistBox);
        tcpClientspinBox->setObjectName(QStringLiteral("tcpClientspinBox"));
        tcpClientspinBox->setMinimum(10);
        tcpClientspinBox->setMaximum(10000);
        tcpClientspinBox->setSingleStep(10);
        tcpClientspinBox->setValue(1000);

        gridLayout_10->addWidget(tcpClientspinBox, 0, 1, 1, 1);

        udpspinBox = new QSpinBox(tcpClientAssistBox);
        udpspinBox->setObjectName(QStringLiteral("udpspinBox"));
        udpspinBox->setMinimum(10);
        udpspinBox->setMaximum(10000);
        udpspinBox->setSingleStep(10);
        udpspinBox->setValue(1000);

        gridLayout_10->addWidget(udpspinBox, 1, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_10);


        verticalLayout_8->addWidget(tcpClientAssistBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        horizontalLayout_8->addLayout(verticalLayout_8);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        tcpClientRevBox = new QGroupBox(clientTab);
        tcpClientRevBox->setObjectName(QStringLiteral("tcpClientRevBox"));
        verticalLayout_11 = new QVBoxLayout(tcpClientRevBox);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tcpCRevLabel = new QLabel(tcpClientRevBox);
        tcpCRevLabel->setObjectName(QStringLiteral("tcpCRevLabel"));
        tcpCRevLabel->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(tcpCRevLabel);

        tcpCSendLabel = new QLabel(tcpClientRevBox);
        tcpCSendLabel->setObjectName(QStringLiteral("tcpCSendLabel"));
        tcpCSendLabel->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(tcpCSendLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_9->addLayout(horizontalLayout_5);

        tcpClientRevtextEdit = new QTextEdit(tcpClientRevBox);
        tcpClientRevtextEdit->setObjectName(QStringLiteral("tcpClientRevtextEdit"));
        tcpClientRevtextEdit->setMinimumSize(QSize(625, 130));
        tcpClientRevtextEdit->setMaximumSize(QSize(16777215, 16777215));
        tcpClientRevtextEdit->setReadOnly(true);

        verticalLayout_9->addWidget(tcpClientRevtextEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        udpRevLabel = new QLabel(tcpClientRevBox);
        udpRevLabel->setObjectName(QStringLiteral("udpRevLabel"));
        udpRevLabel->setMinimumSize(QSize(150, 0));

        horizontalLayout_6->addWidget(udpRevLabel);

        udpSendLabel = new QLabel(tcpClientRevBox);
        udpSendLabel->setObjectName(QStringLiteral("udpSendLabel"));
        udpSendLabel->setMinimumSize(QSize(150, 0));

        horizontalLayout_6->addWidget(udpSendLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_6);

        udpRevtextEdit = new QTextEdit(tcpClientRevBox);
        udpRevtextEdit->setObjectName(QStringLiteral("udpRevtextEdit"));
        udpRevtextEdit->setMinimumSize(QSize(0, 130));
        udpRevtextEdit->setMaximumSize(QSize(16777215, 16777215));
        udpRevtextEdit->setReadOnly(true);

        verticalLayout_9->addWidget(udpRevtextEdit);


        verticalLayout_11->addLayout(verticalLayout_9);


        verticalLayout_14->addWidget(tcpClientRevBox);

        tcpClientSendBox = new QGroupBox(clientTab);
        tcpClientSendBox->setObjectName(QStringLiteral("tcpClientSendBox"));
        verticalLayout_13 = new QVBoxLayout(tcpClientSendBox);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        tcpClientSendtextEdit = new QTextEdit(tcpClientSendBox);
        tcpClientSendtextEdit->setObjectName(QStringLiteral("tcpClientSendtextEdit"));
        tcpClientSendtextEdit->setMinimumSize(QSize(0, 50));
        tcpClientSendtextEdit->setMaximumSize(QSize(16777215, 50));

        verticalLayout_12->addWidget(tcpClientSendtextEdit);

        tcpCLastSendComboBox = new QComboBox(tcpClientSendBox);
        tcpCLastSendComboBox->setObjectName(QStringLiteral("tcpCLastSendComboBox"));
        tcpCLastSendComboBox->setMinimumSize(QSize(0, 20));
        tcpCLastSendComboBox->setMaximumSize(QSize(16777215, 20));

        verticalLayout_12->addWidget(tcpCLastSendComboBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        tcpClientSendButton = new QPushButton(tcpClientSendBox);
        tcpClientSendButton->setObjectName(QStringLiteral("tcpClientSendButton"));
        tcpClientSendButton->setMinimumSize(QSize(75, 23));
        tcpClientSendButton->setMaximumSize(QSize(75, 23));

        horizontalLayout_7->addWidget(tcpClientSendButton);

        udpSendButton = new QPushButton(tcpClientSendBox);
        udpSendButton->setObjectName(QStringLiteral("udpSendButton"));
        udpSendButton->setMinimumSize(QSize(75, 23));
        udpSendButton->setMaximumSize(QSize(75, 23));

        horizontalLayout_7->addWidget(udpSendButton);

        pushButton_7 = new QPushButton(tcpClientSendBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(75, 23));
        pushButton_7->setMaximumSize(QSize(75, 23));

        horizontalLayout_7->addWidget(pushButton_7);


        verticalLayout_12->addLayout(horizontalLayout_7);


        verticalLayout_13->addLayout(verticalLayout_12);


        verticalLayout_14->addWidget(tcpClientSendBox);


        horizontalLayout_8->addLayout(verticalLayout_14);


        verticalLayout_15->addLayout(horizontalLayout_8);

        tabWidget->addTab(clientTab, QString());

        verticalLayout_10->addWidget(tabWidget);

        ComAssistantsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ComAssistantsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 877, 23));
        ComAssistantsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ComAssistantsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ComAssistantsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ComAssistantsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ComAssistantsClass->setStatusBar(statusBar);

        retranslateUi(ComAssistantsClass);

        tabWidget->setCurrentIndex(2);
        baudrateComboBox->setCurrentIndex(7);
        openButton->setDefault(false);


        QMetaObject::connectSlotsByName(ComAssistantsClass);
    } // setupUi

    void retranslateUi(QMainWindow *ComAssistantsClass)
    {
        ComAssistantsClass->setWindowTitle(QApplication::translate("ComAssistantsClass", "ComAssistants", Q_NULLPTR));
        action->setText(QApplication::translate("ComAssistantsClass", "\346\211\223\345\274\200", Q_NULLPTR));
        SerialSettingGroupBox->setTitle(QApplication::translate("ComAssistantsClass", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        SerialLabel->setText(QApplication::translate("ComAssistantsClass", "\347\253\257\345\217\243", Q_NULLPTR));
        baudrateLabel->setText(QApplication::translate("ComAssistantsClass", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baudrateComboBox->clear();
        baudrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("ComAssistantsClass", "1200", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "2400", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "4800", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "9600", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "19200", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "38400", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "57600", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "115200", Q_NULLPTR)
        );
        databitLabel->setText(QApplication::translate("ComAssistantsClass", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        databitComboBox->clear();
        databitComboBox->insertItems(0, QStringList()
         << QApplication::translate("ComAssistantsClass", "8", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "7", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "6", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "5", Q_NULLPTR)
        );
        checkbitLabel->setText(QApplication::translate("ComAssistantsClass", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        checkbitComboBox->clear();
        checkbitComboBox->insertItems(0, QStringList()
         << QApplication::translate("ComAssistantsClass", "None", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "Even", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "Odd", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "Mark", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "Space", Q_NULLPTR)
        );
        stopbitLabel->setText(QApplication::translate("ComAssistantsClass", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        stopbitComboBox->clear();
        stopbitComboBox->insertItems(0, QStringList()
         << QApplication::translate("ComAssistantsClass", "1", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "1.5", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "2", Q_NULLPTR)
        );
        flowcontrolLabel->setText(QApplication::translate("ComAssistantsClass", "\346\265\201\346\216\247", Q_NULLPTR));
        flowcontrolComboBox->clear();
        flowcontrolComboBox->insertItems(0, QStringList()
         << QApplication::translate("ComAssistantsClass", "None", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "RTS/CTS", Q_NULLPTR)
         << QApplication::translate("ComAssistantsClass", "XON/XOFF", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ComAssistantsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">\345\267\262\345\205\263\351\227\255</span></p></body></html>", Q_NULLPTR));
        openButton->setText(QApplication::translate("ComAssistantsClass", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        ReceiveSettingGroupBox->setTitle(QApplication::translate("ComAssistantsClass", "\346\216\245\346\224\266\350\256\276\347\275\256", Q_NULLPTR));
        AsciiButton_1->setText(QApplication::translate("ComAssistantsClass", "ASCII", Q_NULLPTR));
        HexButton_1->setText(QApplication::translate("ComAssistantsClass", "HEX", Q_NULLPTR));
        AutocheckBox->setText(QApplication::translate("ComAssistantsClass", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        ShowsendcheckBox->setText(QApplication::translate("ComAssistantsClass", "\346\230\276\347\244\272\345\217\221\351\200\201", Q_NULLPTR));
        ShowtimecheckBox->setText(QApplication::translate("ComAssistantsClass", "\346\230\276\347\244\272\346\227\266\351\227\264", Q_NULLPTR));
        SendSettingGroupBox->setTitle(QApplication::translate("ComAssistantsClass", "\345\217\221\351\200\201\350\256\276\347\275\256", Q_NULLPTR));
        sendCheckBox->setText(QApplication::translate("ComAssistantsClass", "\345\256\232\346\227\266", Q_NULLPTR));
        AsciiButton_2->setText(QApplication::translate("ComAssistantsClass", "ASCII", Q_NULLPTR));
        checkBoxDTR->setText(QApplication::translate("ComAssistantsClass", "DTR", Q_NULLPTR));
        checkBoxRTS->setText(QApplication::translate("ComAssistantsClass", "RTS", Q_NULLPTR));
        HexButton_2->setText(QApplication::translate("ComAssistantsClass", "HEX", Q_NULLPTR));
        clear->setText(QApplication::translate("ComAssistantsClass", "\346\270\205\347\251\272\346\224\266\345\217\221", Q_NULLPTR));
        shuaxin->setText(QApplication::translate("ComAssistantsClass", "\345\210\267\346\226\260\344\270\262\345\217\243", Q_NULLPTR));
        groupBoxRev->setTitle(QApplication::translate("ComAssistantsClass", "\346\216\245\346\224\266\345\214\272", Q_NULLPTR));
        groupBoxSend->setTitle(QApplication::translate("ComAssistantsClass", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        labelRev->setText(QApplication::translate("ComAssistantsClass", "\346\216\245\346\224\266:", Q_NULLPTR));
        labelSend->setText(QApplication::translate("ComAssistantsClass", "\345\217\221\351\200\201:", Q_NULLPTR));
        sendButton2->setText(QApplication::translate("ComAssistantsClass", "\345\244\232\351\241\271\345\217\221\351\200\201", Q_NULLPTR));
        sendButton1->setText(QApplication::translate("ComAssistantsClass", "\345\217\221\351\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(serialTab), QApplication::translate("ComAssistantsClass", "Serial", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(serverTab), QApplication::translate("ComAssistantsClass", "TCP Server", Q_NULLPTR));
        serverIPBOX->setTitle(QApplication::translate("ComAssistantsClass", "\347\233\256\346\240\207IP\345\234\260\345\235\200", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("ComAssistantsClass", "192.168.10.100", Q_NULLPTR));
        pingButton->setText(QApplication::translate("ComAssistantsClass", "Ping", Q_NULLPTR));
        tcpClientBox->setTitle(QApplication::translate("ComAssistantsClass", "TCP", Q_NULLPTR));
        tcpLocalLabel->setText(QApplication::translate("ComAssistantsClass", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        tcpPort1->setText(QApplication::translate("ComAssistantsClass", "random", Q_NULLPTR));
        tcpTargetLabel->setText(QApplication::translate("ComAssistantsClass", "\347\233\256\346\240\207\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        tcpPort2->setText(QApplication::translate("ComAssistantsClass", "8888", Q_NULLPTR));
        udpBox->setTitle(QApplication::translate("ComAssistantsClass", "UDP", Q_NULLPTR));
        udpLocalLabel->setText(QApplication::translate("ComAssistantsClass", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        udpPort1->setText(QApplication::translate("ComAssistantsClass", "8000", Q_NULLPTR));
        udpTargetLabel->setText(QApplication::translate("ComAssistantsClass", "\347\233\256\346\240\207\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        udpPort2->setText(QApplication::translate("ComAssistantsClass", "8888", Q_NULLPTR));
        tcpClientAssistBox->setTitle(QApplication::translate("ComAssistantsClass", "\350\276\205\345\212\251", Q_NULLPTR));
        tcpStatus->setText(QApplication::translate("ComAssistantsClass", "<html><head/><body><p><span style=\" color:#ff0000;\">Closed</span></p></body></html>", Q_NULLPTR));
        openTcpClient->setText(QApplication::translate("ComAssistantsClass", "\346\211\223\345\274\200TCP", Q_NULLPTR));
        clientHexSend->setText(QApplication::translate("ComAssistantsClass", "HEX\345\217\221", Q_NULLPTR));
        udpStatus->setText(QApplication::translate("ComAssistantsClass", "<html><head/><body><p><span style=\" color:#ff0000;\">Closed</span></p></body></html>", Q_NULLPTR));
        openUdp->setText(QApplication::translate("ComAssistantsClass", "\346\211\223\345\274\200UDP", Q_NULLPTR));
        clientHexRev->setText(QApplication::translate("ComAssistantsClass", "HEX\346\224\266", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("ComAssistantsClass", "\346\230\276\347\244\272\346\227\266\351\227\264", Q_NULLPTR));
        clearUdp->setText(QApplication::translate("ComAssistantsClass", "\346\270\205\347\251\272UDP\346\216\245\346\224\266", Q_NULLPTR));
        clearTcpClient->setText(QApplication::translate("ComAssistantsClass", "\346\270\205\347\251\272TCP\346\216\245\346\224\266", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("ComAssistantsClass", "UDP\350\277\236\347\273\255\345\217\221", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("ComAssistantsClass", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("ComAssistantsClass", "TCP\350\277\236\347\273\255\345\217\221", Q_NULLPTR));
        tcpClientRevBox->setTitle(QApplication::translate("ComAssistantsClass", "\346\216\245\346\224\266\345\214\272", Q_NULLPTR));
        tcpCRevLabel->setText(QApplication::translate("ComAssistantsClass", "TCP\346\216\245\346\224\266\357\274\232", Q_NULLPTR));
        tcpCSendLabel->setText(QApplication::translate("ComAssistantsClass", "TCP\345\217\221\351\200\201\357\274\232", Q_NULLPTR));
        udpRevLabel->setText(QApplication::translate("ComAssistantsClass", "UDP\346\216\245\346\224\266\357\274\232", Q_NULLPTR));
        udpSendLabel->setText(QApplication::translate("ComAssistantsClass", "UDP\345\217\221\351\200\201\357\274\232", Q_NULLPTR));
        tcpClientSendBox->setTitle(QApplication::translate("ComAssistantsClass", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        tcpClientSendButton->setText(QApplication::translate("ComAssistantsClass", "TCP\345\217\221\351\200\201", Q_NULLPTR));
        udpSendButton->setText(QApplication::translate("ComAssistantsClass", "UDP\345\217\221\351\200\201", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("ComAssistantsClass", "\345\244\232\351\241\271\345\217\221\351\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(clientTab), QApplication::translate("ComAssistantsClass", "TCP Client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComAssistantsClass: public Ui_ComAssistantsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMASSISTANTS_H
