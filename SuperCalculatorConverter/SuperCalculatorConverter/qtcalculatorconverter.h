/********************************************************************************
** Form generated from reading UI file 'qtcalculatorconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTCALCULATORCONVERTER_H
#define QTCALCULATORCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCalculatorConverter
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *clear;
    QPushButton *zero;
    QPushButton *equals;
    QPushButton *addition;
    QPushButton *subtraction;
    QPushButton *multiply;
    QPushButton *divide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QtCalculatorConverter)
    {
        if (QtCalculatorConverter->objectName().isEmpty())
            QtCalculatorConverter->setObjectName(QString::fromUtf8("QtCalculatorConverter"));
        QtCalculatorConverter->resize(454, 600);
        QtCalculatorConverter->setAutoFillBackground(false);
        centralwidget = new QWidget(QtCalculatorConverter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 361, 61));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 90, 351, 91));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(20, 200, 71, 71));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(100, 200, 71, 71));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(180, 200, 71, 71));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(20, 280, 71, 71));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(100, 280, 71, 71));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(180, 280, 71, 71));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(20, 360, 71, 71));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(100, 360, 71, 71));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(180, 360, 71, 71));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(20, 440, 71, 71));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(100, 440, 71, 71));
        equals = new QPushButton(centralwidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(180, 440, 71, 71));
        addition = new QPushButton(centralwidget);
        addition->setObjectName(QString::fromUtf8("addition"));
        addition->setGeometry(QRect(260, 200, 71, 71));
        subtraction = new QPushButton(centralwidget);
        subtraction->setObjectName(QString::fromUtf8("subtraction"));
        subtraction->setGeometry(QRect(260, 280, 71, 71));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setGeometry(QRect(260, 360, 71, 71));
        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(260, 440, 71, 71));
        QtCalculatorConverter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QtCalculatorConverter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 454, 26));
        QtCalculatorConverter->setMenuBar(menubar);
        statusbar = new QStatusBar(QtCalculatorConverter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QtCalculatorConverter->setStatusBar(statusbar);

        retranslateUi(QtCalculatorConverter);

        QMetaObject::connectSlotsByName(QtCalculatorConverter);
    } // setupUi

    void retranslateUi(QMainWindow *QtCalculatorConverter)
    {
        QtCalculatorConverter->setWindowTitle(QApplication::translate("QtCalculatorConverter", "MainWindow", nullptr));
        label->setText(QApplication::translate("QtCalculatorConverter", "TextLabel", nullptr));
        one->setText(QApplication::translate("QtCalculatorConverter", "1", nullptr));
        two->setText(QApplication::translate("QtCalculatorConverter", "2", nullptr));
        three->setText(QApplication::translate("QtCalculatorConverter", "3", nullptr));
        four->setText(QApplication::translate("QtCalculatorConverter", "4", nullptr));
        five->setText(QApplication::translate("QtCalculatorConverter", "5", nullptr));
        six->setText(QApplication::translate("QtCalculatorConverter", "6", nullptr));
        seven->setText(QApplication::translate("QtCalculatorConverter", "7", nullptr));
        eight->setText(QApplication::translate("QtCalculatorConverter", "8", nullptr));
        nine->setText(QApplication::translate("QtCalculatorConverter", "9", nullptr));
        clear->setText(QApplication::translate("QtCalculatorConverter", "C", nullptr));
        zero->setText(QApplication::translate("QtCalculatorConverter", "0", nullptr));
        equals->setText(QApplication::translate("QtCalculatorConverter", "=", nullptr));
        addition->setText(QApplication::translate("QtCalculatorConverter", "+", nullptr));
        subtraction->setText(QApplication::translate("QtCalculatorConverter", "-", nullptr));
        multiply->setText(QApplication::translate("QtCalculatorConverter", "*", nullptr));
        divide->setText(QApplication::translate("QtCalculatorConverter", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtCalculatorConverter: public Ui_QtCalculatorConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTCALCULATORCONVERTER_H
