/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *startBtn;
    QLineEdit *videoEdit;
    QPushButton *pushButton;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QWidget *tab_8;
    QGraphicsView *graphicsView_8;
    QPushButton *left;
    QPushButton *clockwise;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_11;
    QGraphicsView *graphicsView_9;
    QPushButton *pushButton_6;
    QGraphicsView *graphicsView_10;
    QLabel *label_8;
    QLabel *label_9;
    QTabWidget *tabWidget_2;
    QWidget *tab_9;
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_2;
    QLabel *label_3;
    QGraphicsView *graphicsView_4;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *tab_10;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_7;
    QGraphicsView *graphicsView_6;
    QGraphicsView *graphicsView_7;
    QGraphicsView *graphicsView_5;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(795, 548);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setGeometry(QRect(665, 478, 121, 61));
        videoEdit = new QLineEdit(centralWidget);
        videoEdit->setObjectName(QString::fromUtf8("videoEdit"));
        videoEdit->setGeometry(QRect(140, 510, 501, 25));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(9, 478, 111, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 490, 251, 17));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(300, 40, 481, 421));
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout = new QGridLayout(tab_7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(tab_7);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        graphicsView_8 = new QGraphicsView(tab_8);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(110, 80, 256, 192));
        left = new QPushButton(tab_8);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(10, 360, 89, 25));
        clockwise = new QPushButton(tab_8);
        clockwise->setObjectName(QString::fromUtf8("clockwise"));
        clockwise->setGeometry(QRect(350, 360, 121, 25));
        pushButton_2 = new QPushButton(tab_8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 330, 121, 25));
        pushButton_3 = new QPushButton(tab_8);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 360, 89, 25));
        pushButton_4 = new QPushButton(tab_8);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 330, 89, 25));
        pushButton_5 = new QPushButton(tab_8);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 360, 89, 25));
        pushButton_7 = new QPushButton(tab_8);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 250, 41, 30));
        pushButton_8 = new QPushButton(tab_8);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 290, 41, 30));
        tabWidget->addTab(tab_8, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        graphicsView_9 = new QGraphicsView(tab_11);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(10, 20, 221, 291));
        pushButton_6 = new QPushButton(tab_11);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 360, 89, 25));
        graphicsView_10 = new QGraphicsView(tab_11);
        graphicsView_10->setObjectName(QString::fromUtf8("graphicsView_10"));
        graphicsView_10->setGeometry(QRect(240, 20, 221, 291));
        label_8 = new QLabel(tab_11);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 0, 68, 22));
        label_9 = new QLabel(tab_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(240, 0, 91, 22));
        tabWidget->addTab(tab_11, QString());
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 40, 278, 421));
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_2 = new QGridLayout(tab_9);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        graphicsView_3 = new QGraphicsView(tab_9);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));

        gridLayout_2->addWidget(graphicsView_3, 2, 0, 1, 1);

        graphicsView_2 = new QGraphicsView(tab_9);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

        gridLayout_2->addWidget(graphicsView_2, 0, 0, 1, 1);

        label_3 = new QLabel(tab_9);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        graphicsView_4 = new QGraphicsView(tab_9);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));

        gridLayout_2->addWidget(graphicsView_4, 4, 0, 1, 1);

        label_2 = new QLabel(tab_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(tab_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        gridLayout_3 = new QGridLayout(tab_10);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(tab_10);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(tab_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 5, 0, 1, 1);

        graphicsView_6 = new QGraphicsView(tab_10);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));

        gridLayout_3->addWidget(graphicsView_6, 2, 0, 1, 1);

        graphicsView_7 = new QGraphicsView(tab_10);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));

        gridLayout_3->addWidget(graphicsView_7, 4, 0, 1, 1);

        graphicsView_5 = new QGraphicsView(tab_10);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));

        gridLayout_3->addWidget(graphicsView_5, 0, 0, 1, 1);

        label_6 = new QLabel(tab_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        tabWidget_2->addTab(tab_10, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), graphicsView, SLOT(show()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Video Processor", nullptr));
        startBtn->setText(QApplication::translate("MainWindow", "Start", nullptr));
        videoEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Record", nullptr));
        label->setText(QApplication::translate("MainWindow", "File Path / RTSP Url / Camera Index :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "origin", nullptr));
        left->setText(QApplication::translate("MainWindow", "left", nullptr));
        clockwise->setText(QApplication::translate("MainWindow", "clockwise", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "counterclockwise", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "right", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "up", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "down", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "rotation", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "detect", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "detect", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "change Light", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindow", "effect", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Green", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Red", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "Single", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Blue+Green", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Red+Green", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Red+Blue", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Merge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
