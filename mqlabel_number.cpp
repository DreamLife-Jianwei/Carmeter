#include "mqlabel_number.h"

MQlabel_Number::MQlabel_Number(QWidget *parent) : QLabel(parent)
{
    this->resize(16,16);
}

void MQlabel_Number::set_number(int num)
{
    switch (num) {
    case 0:
        this->setStyleSheet("border-image:url(:/source/numberl/0.png)");
        break;
    case 1:
        this->setStyleSheet("border-image:url(:/source/numberl/1.png)");
        break;
    case 2:
        this->setStyleSheet("border-image:url(:/source/numberl/2.png)");
        break;
    case 3:
        this->setStyleSheet("border-image:url(:/source/numberl/3.png)");
        break;
    case 4:
        this->setStyleSheet("border-image:url(:/source/numberl/4.png)");
        break;
    case 5:
        this->setStyleSheet("border-image:url(:/source/numberl/5.png)");
        break;
    case 6:
        this->setStyleSheet("border-image:url(:/source/numberl/6.png)");
        break;
    case 7:
        this->setStyleSheet("border-image:url(:/source/numberl/7.png)");
        break;
    case 8:
        this->setStyleSheet("border-image:url(:/source/numberl/8.png)");
        break;
    case 9:
        this->setStyleSheet("border-image:url(:/source/numberl/9.png)");
        break;
    default:
        break;
    }
}
