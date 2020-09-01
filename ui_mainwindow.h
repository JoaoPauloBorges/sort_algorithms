/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonVai;
    QComboBox *comboBoxTamanho;
    QComboBox *comboBoxTipo;
    QComboBox *comboBoxMetodo;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(627, 489);
        MainWindow->setMinimumSize(QSize(627, 489));
        MainWindow->setMaximumSize(QSize(627, 489));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("Mario");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonVai = new QPushButton(centralWidget);
        pushButtonVai->setObjectName(QString::fromUtf8("pushButtonVai"));
        pushButtonVai->setGeometry(QRect(190, 160, 221, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("OCR A Extended"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButtonVai->setFont(font);
        comboBoxTamanho = new QComboBox(centralWidget);
        comboBoxTamanho->addItem(QString());
        comboBoxTamanho->addItem(QString());
        comboBoxTamanho->addItem(QString());
        comboBoxTamanho->addItem(QString());
        comboBoxTamanho->setObjectName(QString::fromUtf8("comboBoxTamanho"));
        comboBoxTamanho->setGeometry(QRect(30, 70, 151, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("OCR A Std"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        comboBoxTamanho->setFont(font1);
        comboBoxTipo = new QComboBox(centralWidget);
        comboBoxTipo->addItem(QString());
        comboBoxTipo->addItem(QString());
        comboBoxTipo->addItem(QString());
        comboBoxTipo->setObjectName(QString::fromUtf8("comboBoxTipo"));
        comboBoxTipo->setGeometry(QRect(200, 70, 191, 61));
        comboBoxTipo->setFont(font1);
        comboBoxMetodo = new QComboBox(centralWidget);
        comboBoxMetodo->addItem(QString());
        comboBoxMetodo->addItem(QString());
        comboBoxMetodo->addItem(QString());
        comboBoxMetodo->addItem(QString());
        comboBoxMetodo->addItem(QString());
        comboBoxMetodo->addItem(QString());
        comboBoxMetodo->setObjectName(QString::fromUtf8("comboBoxMetodo"));
        comboBoxMetodo->setGeometry(QRect(410, 70, 151, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("OCR A Extended"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        comboBoxMetodo->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-20, -20, 671, 480));
        label->setPixmap(QPixmap(QString::fromUtf8("41656272113.jpg")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 420, 371, 16));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButtonVai->raise();
        comboBoxTamanho->raise();
        comboBoxTipo->raise();
        comboBoxMetodo->raise();
        label_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 627, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Trabalho 1", nullptr));
        pushButtonVai->setText(QCoreApplication::translate("MainWindow", "Vai!!!", nullptr));
        comboBoxTamanho->setItemText(0, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboBoxTamanho->setItemText(1, QCoreApplication::translate("MainWindow", "10000", nullptr));
        comboBoxTamanho->setItemText(2, QCoreApplication::translate("MainWindow", "100000", nullptr));
        comboBoxTamanho->setItemText(3, QCoreApplication::translate("MainWindow", "1000000", nullptr));

        comboBoxTipo->setItemText(0, QCoreApplication::translate("MainWindow", "Crescente", nullptr));
        comboBoxTipo->setItemText(1, QCoreApplication::translate("MainWindow", "Decrescente", nullptr));
        comboBoxTipo->setItemText(2, QCoreApplication::translate("MainWindow", "Bagun\303\247ado", nullptr));

        comboBoxMetodo->setItemText(0, QCoreApplication::translate("MainWindow", "Bubble", nullptr));
        comboBoxMetodo->setItemText(1, QCoreApplication::translate("MainWindow", "Inserction", nullptr));
        comboBoxMetodo->setItemText(2, QCoreApplication::translate("MainWindow", "Selection", nullptr));
        comboBoxMetodo->setItemText(3, QCoreApplication::translate("MainWindow", "Merge", nullptr));
        comboBoxMetodo->setItemText(4, QCoreApplication::translate("MainWindow", "Quick", nullptr));
        comboBoxMetodo->setItemText(5, QCoreApplication::translate("MainWindow", "Heap", nullptr));

        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "JoaoPauloBorges Development\342\204\242 -  Todos os direitos reservados \302\251 - 2017", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
