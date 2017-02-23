#include "number_1.h"
#include "ui_number_1.h"

Number_1::Number_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Number_1)
{
    ui->setupUi(this);
}

Number_1::~Number_1()
{
    delete ui;
}

void Number_1::set_number(int num)
{
    int temp1 = num;
    int temp2 = num;
    switch (num%10) {
    case 0:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/0.png)");
        break;
    case 1:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/1.png)");
        break;
    case 2:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/2.png)");
        break;
    case 3:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/3.png)");
        break;
    case 4:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/4.png)");
        break;
    case 5:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/5.png)");
        break;
    case 6:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/6.png)");
        break;
    case 7:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/7.png)");
        break;
    case 8:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/8.png)");
        break;
    case 9:
        ui->label_3->setStyleSheet("border-image:url(:/source/number/9.png)");
        break;
    default:
        break;
    }
    switch (temp1/10) {
    case 0:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/0.png)");
        break;
    case 1:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/1.png)");
        break;
    case 2:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/2.png)");
        break;
    case 3:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/3.png)");
        break;
    case 4:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/4.png)");
        break;
    case 5:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/5.png)");
        break;
    case 6:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/6.png)");
        break;
    case 7:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/7.png)");
        break;
    case 8:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/8.png)");
        break;
    case 9:
        ui->label_2->setStyleSheet("border-image:url(:/source/number/9.png)");
        break;
    default:
        break;
    }
    switch (temp2/100) {
    case 0:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/0.png)");
        break;
    case 1:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/1.png)");
        break;
    case 2:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/2.png)");
        break;
    case 3:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/3.png)");
        break;
    case 4:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/4.png)");
        break;
    case 5:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/5.png)");
        break;
    case 6:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/6.png)");
        break;
    case 7:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/7.png)");
        break;
    case 8:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/8.png)");
        break;
    case 9:
        ui->label_1->setStyleSheet("border-image:url(:/source/number/9.png)");
        break;
    default:
        break;
    }
    if(num<10)
    {
        ui->label_3->move(64,0);
        ui->label_2->hide();
        ui->label_1->hide();

    }
    else if(num >=10 && num <100)
    {
        ui->label_2->show();
        ui->label_1->hide();
        ui->label_2->move(32,0);
        ui->label_3->move(96,0);
    }
    else
    {
        ui->label_1->show();
        ui->label_2->show();
        ui->label_1->move(0,0);
        ui->label_2->move(64,0);
        ui->label_3->move(128,0);
    }
}
