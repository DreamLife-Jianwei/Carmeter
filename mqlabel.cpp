#include "mqlabel.h"

MQlabel::MQlabel(QWidget *parent) : QLabel(parent)
{
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(timerout_glitter()));
}

void MQlabel::glitter(bool temp)
{
    if(temp)
    {
        timer->start(1000);
    }
    else
    {
        timer->stop();
    }
}

void MQlabel::timerout_glitter()
{
    if(this->isHidden())
    {
        this->show();
    }
    else
    {
        this->hide();
    }
}
