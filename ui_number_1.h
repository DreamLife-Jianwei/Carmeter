/********************************************************************************
** Form generated from reading UI file 'number_1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBER_1_H
#define UI_NUMBER_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Number_1
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Number_1)
    {
        if (Number_1->objectName().isEmpty())
            Number_1->setObjectName(QStringLiteral("Number_1"));
        Number_1->resize(192, 72);
        label_1 = new QLabel(Number_1);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(0, 0, 64, 72));
        label_2 = new QLabel(Number_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(64, 0, 64, 72));
        label_3 = new QLabel(Number_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(128, 0, 64, 72));

        retranslateUi(Number_1);

        QMetaObject::connectSlotsByName(Number_1);
    } // setupUi

    void retranslateUi(QWidget *Number_1)
    {
        Number_1->setWindowTitle(QApplication::translate("Number_1", "Form", Q_NULLPTR));
        label_1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Number_1: public Ui_Number_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBER_1_H
