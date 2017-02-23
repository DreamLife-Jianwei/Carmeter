/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mqlabel.h"
#include "mqlabel_number.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_background;
    QPushButton *pushButton_close;
    QPushButton *pushButton_timer;
    QWidget *widget_lline;
    QLabel *label_lline_1;
    QLabel *label_lline_2;
    QLabel *label_lline_3;
    QLabel *label_lline_4;
    QLabel *label_lline_5;
    QLabel *label_lline_6;
    QLabel *label_lline_7;
    QLabel *label_lline_8;
    QLabel *label_lline_9;
    QLabel *label_lline_10;
    QWidget *widget_titlebar;
    MQlabel *label_titlebar_2;
    MQlabel *label_titlebar_1;
    MQlabel *label_titlebar_3;
    MQlabel *label_titlebar_4;
    MQlabel *label_titlebar_5;
    MQlabel *label_titlebar_6;
    MQlabel *label_titlebar_7;
    QWidget *widget_number;
    QLabel *label_numbre;
    QLabel *label_numbre_1;
    QLabel *label_numbre_2;
    QWidget *widget_center;
    QWidget *widget_rline;
    QLabel *label_back;
    QLabel *label_rline_1;
    QLabel *label_rline_2;
    QLabel *label_npdr;
    QWidget *widget_statebar;
    QLabel *label_statebackground;
    MQlabel_Number *label_state_1;
    MQlabel_Number *label_state_2;
    MQlabel_Number *label_state_3;
    MQlabel_Number *label_state_4;
    MQlabel_Number *label_state_5;
    MQlabel_Number *label_state_6;
    MQlabel_Number *label_state_7;
    MQlabel_Number *label_state_8;
    MQlabel_Number *label_state_9;
    MQlabel_Number *label_state_10;
    MQlabel_Number *label_state_11;
    MQlabel_Number *label_state_12;
    MQlabel_Number *label_state_13;
    MQlabel_Number *label_state_14;
    MQlabel_Number *label_state_15;
    MQlabel_Number *label_state_16;
    MQlabel_Number *label_state_17;
    MQlabel_Number *label_state_18;
    MQlabel_Number *label_state_19;
    MQlabel_Number *label_state_20;
    MQlabel_Number *label_state_21;
    MQlabel *label_anquan_1;
    MQlabel *label_anquan_2;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 480);
        label_background = new QLabel(Widget);
        label_background->setObjectName(QStringLiteral("label_background"));
        label_background->setGeometry(QRect(0, 0, 800, 480));
        label_background->setStyleSheet(QStringLiteral("border-image: url(:/source/background/background.png);"));
        pushButton_close = new QPushButton(Widget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(750, 422, 51, 21));
        pushButton_timer = new QPushButton(Widget);
        pushButton_timer->setObjectName(QStringLiteral("pushButton_timer"));
        pushButton_timer->setGeometry(QRect(750, 400, 51, 21));
        widget_lline = new QWidget(Widget);
        widget_lline->setObjectName(QStringLiteral("widget_lline"));
        widget_lline->setGeometry(QRect(50, 80, 131, 321));
        label_lline_1 = new QLabel(widget_lline);
        label_lline_1->setObjectName(QStringLiteral("label_lline_1"));
        label_lline_1->setGeometry(QRect(68, 291, 32, 16));
        label_lline_1->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/001.png);"));
        label_lline_2 = new QLabel(widget_lline);
        label_lline_2->setObjectName(QStringLiteral("label_lline_2"));
        label_lline_2->setGeometry(QRect(51, 261, 32, 16));
        label_lline_2->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/002.png);"));
        label_lline_3 = new QLabel(widget_lline);
        label_lline_3->setObjectName(QStringLiteral("label_lline_3"));
        label_lline_3->setGeometry(QRect(41, 231, 32, 16));
        label_lline_3->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/003.png);"));
        label_lline_4 = new QLabel(widget_lline);
        label_lline_4->setObjectName(QStringLiteral("label_lline_4"));
        label_lline_4->setGeometry(QRect(34, 200, 32, 24));
        label_lline_4->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/004.png);"));
        label_lline_5 = new QLabel(widget_lline);
        label_lline_5->setObjectName(QStringLiteral("label_lline_5"));
        label_lline_5->setGeometry(QRect(31, 169, 32, 24));
        label_lline_5->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/005.png);"));
        label_lline_6 = new QLabel(widget_lline);
        label_lline_6->setObjectName(QStringLiteral("label_lline_6"));
        label_lline_6->setGeometry(QRect(31, 140, 32, 24));
        label_lline_6->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/006.png);"));
        label_lline_7 = new QLabel(widget_lline);
        label_lline_7->setObjectName(QStringLiteral("label_lline_7"));
        label_lline_7->setGeometry(QRect(32, 110, 32, 24));
        label_lline_7->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/007.png);"));
        label_lline_8 = new QLabel(widget_lline);
        label_lline_8->setObjectName(QStringLiteral("label_lline_8"));
        label_lline_8->setGeometry(QRect(40, 82, 32, 24));
        label_lline_8->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/008.png);"));
        label_lline_9 = new QLabel(widget_lline);
        label_lline_9->setObjectName(QStringLiteral("label_lline_9"));
        label_lline_9->setGeometry(QRect(51, 52, 32, 24));
        label_lline_9->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/009.png);"));
        label_lline_10 = new QLabel(widget_lline);
        label_lline_10->setObjectName(QStringLiteral("label_lline_10"));
        label_lline_10->setGeometry(QRect(63, 24, 32, 24));
        label_lline_10->setStyleSheet(QStringLiteral("border-image: url(:/source/lline/010.png);"));
        widget_titlebar = new QWidget(Widget);
        widget_titlebar->setObjectName(QStringLiteral("widget_titlebar"));
        widget_titlebar->setGeometry(QRect(0, 0, 800, 32));
        label_titlebar_2 = new MQlabel(widget_titlebar);
        label_titlebar_2->setObjectName(QStringLiteral("label_titlebar_2"));
        label_titlebar_2->setGeometry(QRect(76, 4, 48, 24));
        label_titlebar_2->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/001.png);"));
        label_titlebar_1 = new MQlabel(widget_titlebar);
        label_titlebar_1->setObjectName(QStringLiteral("label_titlebar_1"));
        label_titlebar_1->setGeometry(QRect(10, 8, 56, 16));
        label_titlebar_1->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/ready.png);"));
        label_titlebar_3 = new MQlabel(widget_titlebar);
        label_titlebar_3->setObjectName(QStringLiteral("label_titlebar_3"));
        label_titlebar_3->setGeometry(QRect(134, 0, 48, 32));
        label_titlebar_3->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/002.png);"));
        label_titlebar_4 = new MQlabel(widget_titlebar);
        label_titlebar_4->setObjectName(QStringLiteral("label_titlebar_4"));
        label_titlebar_4->setGeometry(QRect(610, 0, 48, 32));
        label_titlebar_4->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/003.png);"));
        label_titlebar_5 = new MQlabel(widget_titlebar);
        label_titlebar_5->setObjectName(QStringLiteral("label_titlebar_5"));
        label_titlebar_5->setGeometry(QRect(670, 0, 40, 32));
        label_titlebar_5->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/keyout.png);"));
        label_titlebar_6 = new MQlabel(widget_titlebar);
        label_titlebar_6->setObjectName(QStringLiteral("label_titlebar_6"));
        label_titlebar_6->setGeometry(QRect(720, 0, 32, 32));
        label_titlebar_6->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/pagoff.png);"));
        label_titlebar_7 = new MQlabel(widget_titlebar);
        label_titlebar_7->setObjectName(QStringLiteral("label_titlebar_7"));
        label_titlebar_7->setGeometry(QRect(760, 0, 32, 32));
        label_titlebar_7->setStyleSheet(QStringLiteral("border-image: url(:/source/titlebar/power.png);"));
        widget_number = new QWidget(Widget);
        widget_number->setObjectName(QStringLiteral("widget_number"));
        widget_number->setGeometry(QRect(190, 19, 408, 408));
        widget_number->setStyleSheet(QStringLiteral(""));
        label_numbre = new QLabel(widget_number);
        label_numbre->setObjectName(QStringLiteral("label_numbre"));
        label_numbre->setGeometry(QRect(0, 0, 408, 408));
        label_numbre->setStyleSheet(QStringLiteral("border-image: url(:/source/number/number1.png);"));
        label_numbre_1 = new QLabel(widget_number);
        label_numbre_1->setObjectName(QStringLiteral("label_numbre_1"));
        label_numbre_1->setGeometry(QRect(0, 0, 408, 368));
        label_numbre_1->setStyleSheet(QStringLiteral(""));
        label_numbre_2 = new QLabel(widget_number);
        label_numbre_2->setObjectName(QStringLiteral("label_numbre_2"));
        label_numbre_2->setGeometry(QRect(0, 0, 408, 368));
        label_numbre_2->setStyleSheet(QStringLiteral(""));
        widget_center = new QWidget(widget_number);
        widget_center->setObjectName(QStringLiteral("widget_center"));
        widget_center->setGeometry(QRect(115, 156, 192, 72));
        widget_rline = new QWidget(Widget);
        widget_rline->setObjectName(QStringLiteral("widget_rline"));
        widget_rline->setGeometry(QRect(620, 80, 155, 357));
        label_back = new QLabel(widget_rline);
        label_back->setObjectName(QStringLiteral("label_back"));
        label_back->setGeometry(QRect(9, -4, 155, 357));
        label_back->setStyleSheet(QStringLiteral("border-image: url(:/source/rline/back.png);"));
        label_rline_1 = new QLabel(widget_rline);
        label_rline_1->setObjectName(QStringLiteral("label_rline_1"));
        label_rline_1->setGeometry(QRect(36, 20, 60, 130));
        label_rline_1->setStyleSheet(QStringLiteral(""));
        label_rline_2 = new QLabel(widget_rline);
        label_rline_2->setObjectName(QStringLiteral("label_rline_2"));
        label_rline_2->setGeometry(QRect(28, 180, 71, 135));
        label_rline_2->setStyleSheet(QStringLiteral(""));
        label_rline_1->raise();
        label_rline_2->raise();
        label_back->raise();
        label_npdr = new QLabel(Widget);
        label_npdr->setObjectName(QStringLiteral("label_npdr"));
        label_npdr->setGeometry(QRect(376, 388, 40, 40));
        label_npdr->setStyleSheet(QStringLiteral("border-image: url(:/source/number/P.png);"));
        widget_statebar = new QWidget(Widget);
        widget_statebar->setObjectName(QStringLiteral("widget_statebar"));
        widget_statebar->setGeometry(QRect(0, 448, 800, 32));
        label_statebackground = new QLabel(widget_statebar);
        label_statebackground->setObjectName(QStringLiteral("label_statebackground"));
        label_statebackground->setGeometry(QRect(0, 0, 800, 32));
        label_statebackground->setStyleSheet(QStringLiteral("border-image: url(:/source/statebar/statebar.png);"));
        label_state_1 = new MQlabel_Number(widget_statebar);
        label_state_1->setObjectName(QStringLiteral("label_state_1"));
        label_state_1->setGeometry(QRect(41, 11, 16, 16));
        label_state_1->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/2.png);"));
        label_state_2 = new MQlabel_Number(widget_statebar);
        label_state_2->setObjectName(QStringLiteral("label_state_2"));
        label_state_2->setGeometry(QRect(52, 11, 16, 16));
        label_state_2->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/0.png);"));
        label_state_3 = new MQlabel_Number(widget_statebar);
        label_state_3->setObjectName(QStringLiteral("label_state_3"));
        label_state_3->setGeometry(QRect(61, 11, 16, 16));
        label_state_3->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/1.png);"));
        label_state_4 = new MQlabel_Number(widget_statebar);
        label_state_4->setObjectName(QStringLiteral("label_state_4"));
        label_state_4->setGeometry(QRect(72, 11, 16, 16));
        label_state_4->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_5 = new MQlabel_Number(widget_statebar);
        label_state_5->setObjectName(QStringLiteral("label_state_5"));
        label_state_5->setGeometry(QRect(97, 11, 16, 16));
        label_state_5->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_6 = new MQlabel_Number(widget_statebar);
        label_state_6->setObjectName(QStringLiteral("label_state_6"));
        label_state_6->setGeometry(QRect(106, 11, 16, 16));
        label_state_6->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_7 = new MQlabel_Number(widget_statebar);
        label_state_7->setObjectName(QStringLiteral("label_state_7"));
        label_state_7->setGeometry(QRect(126, 11, 16, 16));
        label_state_7->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_8 = new MQlabel_Number(widget_statebar);
        label_state_8->setObjectName(QStringLiteral("label_state_8"));
        label_state_8->setGeometry(QRect(135, 11, 16, 16));
        label_state_8->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_9 = new MQlabel_Number(widget_statebar);
        label_state_9->setObjectName(QStringLiteral("label_state_9"));
        label_state_9->setGeometry(QRect(160, 11, 16, 16));
        label_state_9->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_10 = new MQlabel_Number(widget_statebar);
        label_state_10->setObjectName(QStringLiteral("label_state_10"));
        label_state_10->setGeometry(QRect(169, 11, 16, 16));
        label_state_10->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_11 = new MQlabel_Number(widget_statebar);
        label_state_11->setObjectName(QStringLiteral("label_state_11"));
        label_state_11->setGeometry(QRect(185, 11, 16, 16));
        label_state_11->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_12 = new MQlabel_Number(widget_statebar);
        label_state_12->setObjectName(QStringLiteral("label_state_12"));
        label_state_12->setGeometry(QRect(195, 11, 16, 16));
        label_state_12->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_13 = new MQlabel_Number(widget_statebar);
        label_state_13->setObjectName(QStringLiteral("label_state_13"));
        label_state_13->setGeometry(QRect(548, 11, 16, 16));
        label_state_13->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_14 = new MQlabel_Number(widget_statebar);
        label_state_14->setObjectName(QStringLiteral("label_state_14"));
        label_state_14->setGeometry(QRect(559, 11, 16, 16));
        label_state_14->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_15 = new MQlabel_Number(widget_statebar);
        label_state_15->setObjectName(QStringLiteral("label_state_15"));
        label_state_15->setGeometry(QRect(569, 11, 16, 16));
        label_state_15->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_16 = new MQlabel_Number(widget_statebar);
        label_state_16->setObjectName(QStringLiteral("label_state_16"));
        label_state_16->setGeometry(QRect(584, 11, 16, 16));
        label_state_16->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_17 = new MQlabel_Number(widget_statebar);
        label_state_17->setObjectName(QStringLiteral("label_state_17"));
        label_state_17->setGeometry(QRect(691, 10, 16, 16));
        label_state_17->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_18 = new MQlabel_Number(widget_statebar);
        label_state_18->setObjectName(QStringLiteral("label_state_18"));
        label_state_18->setGeometry(QRect(701, 10, 16, 16));
        label_state_18->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_19 = new MQlabel_Number(widget_statebar);
        label_state_19->setObjectName(QStringLiteral("label_state_19"));
        label_state_19->setGeometry(QRect(711, 10, 16, 16));
        label_state_19->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_20 = new MQlabel_Number(widget_statebar);
        label_state_20->setObjectName(QStringLiteral("label_state_20"));
        label_state_20->setGeometry(QRect(721, 10, 16, 16));
        label_state_20->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_state_21 = new MQlabel_Number(widget_statebar);
        label_state_21->setObjectName(QStringLiteral("label_state_21"));
        label_state_21->setGeometry(QRect(731, 10, 16, 16));
        label_state_21->setStyleSheet(QStringLiteral("border-image: url(:/source/numberl/3.png);"));
        label_anquan_1 = new MQlabel(Widget);
        label_anquan_1->setObjectName(QStringLiteral("label_anquan_1"));
        label_anquan_1->setGeometry(QRect(330, 380, 40, 48));
        label_anquan_1->setStyleSheet(QStringLiteral("border-image: url(:/source/number/anquan1.png);"));
        label_anquan_2 = new MQlabel(Widget);
        label_anquan_2->setObjectName(QStringLiteral("label_anquan_2"));
        label_anquan_2->setGeometry(QRect(420, 380, 40, 48));
        label_anquan_2->setStyleSheet(QStringLiteral("border-image: url(:/source/number/anquan1.png);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 200, 421, 81));
        label_background->raise();
        widget_lline->raise();
        widget_titlebar->raise();
        widget_number->raise();
        widget_rline->raise();
        pushButton_close->raise();
        pushButton_timer->raise();
        label_npdr->raise();
        widget_statebar->raise();
        label_anquan_1->raise();
        label_anquan_2->raise();
        label->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_background->setText(QString());
        pushButton_close->setText(QApplication::translate("Widget", "close", Q_NULLPTR));
        pushButton_timer->setText(QApplication::translate("Widget", "start", Q_NULLPTR));
        label_lline_1->setText(QString());
        label_lline_2->setText(QString());
        label_lline_3->setText(QString());
        label_lline_4->setText(QString());
        label_lline_5->setText(QString());
        label_lline_6->setText(QString());
        label_lline_7->setText(QString());
        label_lline_8->setText(QString());
        label_lline_9->setText(QString());
        label_lline_10->setText(QString());
        label_titlebar_2->setText(QString());
        label_titlebar_1->setText(QString());
        label_titlebar_3->setText(QString());
        label_titlebar_4->setText(QString());
        label_titlebar_5->setText(QString());
        label_titlebar_6->setText(QString());
        label_titlebar_7->setText(QString());
        label_numbre->setText(QString());
        label_numbre_1->setText(QString());
        label_numbre_2->setText(QString());
        label_back->setText(QString());
        label_rline_1->setText(QString());
        label_rline_2->setText(QString());
        label_npdr->setText(QString());
        label_statebackground->setText(QString());
        label_state_1->setText(QString());
        label_state_2->setText(QString());
        label_state_3->setText(QString());
        label_state_4->setText(QString());
        label_state_5->setText(QString());
        label_state_6->setText(QString());
        label_state_7->setText(QString());
        label_state_8->setText(QString());
        label_state_9->setText(QString());
        label_state_10->setText(QString());
        label_state_11->setText(QString());
        label_state_12->setText(QString());
        label_state_13->setText(QString());
        label_state_14->setText(QString());
        label_state_15->setText(QString());
        label_state_16->setText(QString());
        label_state_17->setText(QString());
        label_state_18->setText(QString());
        label_state_19->setText(QString());
        label_state_20->setText(QString());
        label_state_21->setText(QString());
        label_anquan_1->setText(QString());
        label_anquan_2->setText(QString());
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:600; color:#ff0000;\">QQ:609932088</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
