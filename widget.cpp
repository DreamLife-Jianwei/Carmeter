#include "widget.h"
#include "ui_widget.h"


#include <QDebug>
#include <QPainter>
#include <QDateTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Car2017");
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->label_background->setStyleSheet("border-image:url(:/source/background/background.png)");
    ui->label_lline_1->setStyleSheet("border-image:url(:/source/lline/001.png)");
    ui->label_lline_2->setStyleSheet("border-image:url(:/source/lline/002.png)");
    ui->label_lline_3->setStyleSheet("border-image:url(:/source/lline/003.png)");
    ui->label_lline_4->setStyleSheet("border-image:url(:/source/lline/004.png)");
    ui->label_lline_5->setStyleSheet("border-image:url(:/source/lline/005.png)");
    ui->label_lline_6->setStyleSheet("border-image:url(:/source/lline/006.png)");
    ui->label_lline_7->setStyleSheet("border-image:url(:/source/lline/007.png)");
    ui->label_lline_8->setStyleSheet("border-image:url(:/source/lline/008.png)");
    ui->label_lline_9->setStyleSheet("border-image:url(:/source/lline/009.png)");
    ui->label_lline_10->setStyleSheet("border-image:url(:/source/lline/010.png)");


    statebar_opacity = new QGraphicsOpacityEffect();
    ui->widget_statebar->setGraphicsEffect(statebar_opacity);
    statebar_opacity->setOpacity(0.0);



    show_titlebar(1,false);
    show_titlebar(2,false);
    show_titlebar(3,false);
    show_titlebar(4,false);
    show_titlebar(5,false);
    show_titlebar(6,false);
    show_titlebar(7,false);


    timer_pointer = new QTimer();
    connect(timer_pointer,SIGNAL(timeout()),this,SLOT(slot_timeout_timer_pointer()));
    timer_Lline_Start = new QTimer();
    connect(timer_Lline_Start,SIGNAL(timeout()),this,SLOT(slot_timerout_lline_self_inspection()));
    timer_number_car = new QTimer();
    connect(timer_number_car,SIGNAL(timeout()),this,SLOT(slot_timerout_number_car()));
    timer_titlebar_glitter = new QTimer();
    connect(timer_titlebar_glitter,SIGNAL(timeout()),this,SLOT(slot_timerout_titlebar_glitter()));
    timer_statebar = new QTimer();
    connect(timer_statebar,SIGNAL(timeout()),this,SLOT(slot_timerout_show_widget_statbar()));

    ui->label_numbre_1->installEventFilter(this);
    ui->label_numbre_2->installEventFilter(this);
    ui->label_rline_1->installEventFilter(this);
    ui->label_rline_2->installEventFilter(this);

    pixmap_pointer = new QPixmap();

    pixmap_pointer->load(":/source/number/pointer.png");

    image_number_car = new QImage();

    image_number_car->load(":/source/number/car.png");

    number_center = new Number_1(ui->widget_center);
    number_center->setGeometry(0,0,192,72);
    number_center->show();

}

Widget::~Widget()
{
    delete ui;
}
/*
 * 关闭函数，
 * 点击按钮是，释放所有资源
 */
void Widget::on_pushButton_close_clicked()
{
    timer_Lline_Start->stop();
    timer_pointer->stop();
    timer_number_car->stop();
    timer_titlebar_glitter->stop();
    timer_statebar->stop();
    delete timer_Lline_Start,timer_pointer,timer_number_car,timer_titlebar_glitter,timer_statebar;


    this->close();
}
/*
 * 计时器开始按钮，点击计时器开始计时
 */
void Widget::on_pushButton_timer_clicked()
{
    if(ui->pushButton_timer->text() == "start")
    {

        show_titlebar(1,true);
        show_titlebar(2,true);
        show_titlebar(3,true);
        show_titlebar(4,true);
        show_titlebar(5,true);
        show_titlebar(6,true);
        show_titlebar(7,true);
        ui->pushButton_timer->setText("stop");
        timer_pointer->start(40);   //控制中心指针的定时器
        timer_Lline_Start->start(80);   //控制左侧竖条的定时器
        timer_number_car->start(40);    //控制中中心速度表的定时器
        timer_statebar->start(40);    //控制下方状态栏的定时器
        ui->label_npdr->setStyleSheet("border-image:url(:/source/number/N.png)");
        ui->label_anquan_1->glitter(true);
        ui->label_anquan_2->glitter(true);

    }
    else if(ui->pushButton_timer->text() == "stop")
    {
        ui->pushButton_timer->setText("start");
        timer_pointer->stop();

    }
}
/*
 * 中间仪表更新对应超函数
 */
static int pointer_angle = 0;
static bool pointer_angle_flag = true;
void Widget::slot_timeout_timer_pointer()
{
    if(pointer_angle_flag)
    {
        pointer_angle++;
        if(pointer_angle>290)
        {
            pointer_angle_flag = false;
        }
    }
    else
    {
        pointer_angle--;
        if(pointer_angle<0)
        {
            pointer_angle_flag = true;
        }
    }
    number_center->set_number(100.0/290.0*pointer_angle);
    show_Lline(((int)(100.0/290.0*pointer_angle)/10));


//    test
    set_statebar_data();
    set_statebar_trip();
    set_statebar_odo();

    update();
}
/*
 * 这个槽函数实现了仪表界面在开机瞬间的自检
 * 最左侧的这一个走一个来回
 * 从最小走到最大
 * 再从最大走到最小
 */
static int lline_self_inspection = 0;
static bool lline_flage =true;
void Widget::slot_timerout_lline_self_inspection()
{

    if(lline_flage)
    {
        show_Lline(lline_self_inspection);
        ++lline_self_inspection;
        if(lline_self_inspection ==11)
        {
            lline_self_inspection = 10;
            lline_flage = false;
        }
    }
    else
    {
        show_Lline(lline_self_inspection);
        --lline_self_inspection;
        if(lline_self_inspection ==-1)
        {
            lline_self_inspection = 0;
            lline_flage = true;
            timer_Lline_Start->stop();
        }
    }
}
/*
 * 这个函数是小车开始进入是放大的倍数定时器函数
 */
static double number_car_time = 4.0;
void Widget::slot_timerout_number_car()
{
    if(number_car_time>10.0)
    {
        number_car_time = 4.0;
        number_car_time=number_car_time+0.2;
        if(number_car_time >= 10.0)
        {
            timer_number_car->stop();
            show_titlebar(1,false);
            show_titlebar(2,false);
            show_titlebar(3,false);
            show_titlebar(4,false);
            show_titlebar(5,false);
            show_titlebar(6,false);
            show_titlebar(7,false);
            timer_titlebar_glitter->start(5000);

            ui->label_npdr->setStyleSheet("border-image:url(:/source/number/D.png)");
        }
        //        qDebug()<<number_car_time;
    }
    else
    {
        number_car_time=number_car_time+0.2;
        if(number_car_time >= 10.0)
        {
            timer_number_car->stop();
            show_titlebar(1,false);
            show_titlebar(2,false);
            show_titlebar(3,false);
            show_titlebar(4,false);
            show_titlebar(5,false);
            show_titlebar(6,false);
            show_titlebar(7,false);
            timer_titlebar_glitter->start(5000);
            ui->label_npdr->setStyleSheet("border-image:url(:/source/number/D.png)");
        }
        //        qDebug()<<number_car_time;
    }
}

void Widget::slot_timerout_titlebar_glitter()
{
    int temp = rand()%7;
    switch (temp)
    {
    case 0:
        ui->label_titlebar_1->glitter(true);
        break;
    case 1:
        ui->label_titlebar_2->glitter(true);
        break;
    case 2:
        ui->label_titlebar_3->glitter(true);
        break;
    case 3:
        ui->label_titlebar_4->glitter(true);
        break;
    case 4:
        ui->label_titlebar_5->glitter(true);
        break;
    case 5:
        ui->label_titlebar_6->glitter(true);
        break;
    case 6:
        ui->label_titlebar_7->glitter(true);
        break;
    default:
        break;
    }
    int temp2 = rand()%7;
    switch (temp2)
    {
    case 0:
        ui->label_titlebar_1->glitter(false);
        break;
    case 1:
        ui->label_titlebar_2->glitter(false);
        break;
    case 2:
        ui->label_titlebar_3->glitter(false);
        break;
    case 3:
        ui->label_titlebar_4->glitter(false);
        break;
    case 4:
        ui->label_titlebar_5->glitter(false);
        break;
    case 5:
        ui->label_titlebar_6->glitter(false);
        break;
    case 6:
        ui->label_titlebar_7->glitter(false);
        break;
    default:
        break;
    }

}
static double statebar_num = 0.0;
void Widget::slot_timerout_show_widget_statbar()
{
    statebar_num=statebar_num+0.02;
    show_widget_statbar(statebar_num);
    if(statebar_num >= 1.0)
    {
        timer_statebar->stop();
        statebar_num = 0.0;

    }

}
/*
 * 左侧条状显示条显示界面
 * 分为11个等级，0 和0-10
 * 每一个等级对饮一个状态，这里是拆分成一个函数来设置每个label的显示和因隐藏
 * 不过代码是少不了的
 */
void Widget::show_Lline(int num)
{

    switch (num) {
    case 0:
    {
        ui->label_lline_1->hide();
        ui->label_lline_2->hide();
        ui->label_lline_3->hide();
        ui->label_lline_4->hide();
        ui->label_lline_5->hide();
        ui->label_lline_6->hide();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 1:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->hide();
        ui->label_lline_3->hide();
        ui->label_lline_4->hide();
        ui->label_lline_5->hide();
        ui->label_lline_6->hide();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 2:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->hide();
        ui->label_lline_4->hide();
        ui->label_lline_5->hide();
        ui->label_lline_6->hide();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 3:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->hide();
        ui->label_lline_5->hide();
        ui->label_lline_6->hide();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 4:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->hide();
        ui->label_lline_6->hide();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 5:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->show();
        ui->label_lline_6->hide();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 6:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->show();
        ui->label_lline_6->show();
        ui->label_lline_7->hide();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 7:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->show();
        ui->label_lline_6->show();
        ui->label_lline_7->show();
        ui->label_lline_8->hide();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 8:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->show();
        ui->label_lline_6->show();
        ui->label_lline_7->show();
        ui->label_lline_8->show();
        ui->label_lline_9->hide();
        ui->label_lline_10->hide();
        break;
    }
    case 9:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->show();
        ui->label_lline_6->show();
        ui->label_lline_7->show();
        ui->label_lline_8->show();
        ui->label_lline_9->show();
        ui->label_lline_10->hide();
        break;
    }
    case 10:
    {
        ui->label_lline_1->show();
        ui->label_lline_2->show();
        ui->label_lline_3->show();
        ui->label_lline_4->show();
        ui->label_lline_5->show();
        ui->label_lline_6->show();
        ui->label_lline_7->show();
        ui->label_lline_8->show();
        ui->label_lline_9->show();
        ui->label_lline_10->show();
        break;
    }
    default:
        break;
    }
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->label_numbre_1 && event->type() == QEvent::Paint)
    {
        draw_number_pointer();
    }
    if(watched == ui->label_numbre_2 && event->type() == QEvent::Paint)
    {
        draw_number_car();
    }
    if(watched == ui->label_rline_1 && event->type() == QEvent::Paint)
    {
        draw_Rline_1();
    }
    if(watched == ui->label_rline_2 && event->type() == QEvent::Paint)
    {
        draw_Rline_2();
    }

    return QWidget::eventFilter(watched,event);
}

void Widget::draw_number_pointer()
{
    QPainter painter(ui->label_numbre_1);

    painter.translate(204,204);

    painter.save();

    painter.rotate(pointer_angle);



    QRect rect(-202,-200,408,408);
    QRect source(0,0,408,408);

    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.drawPixmap(rect,*pixmap_pointer,source);


    painter.restore();
}

void Widget::draw_number_car()
{
    QPainter painter(ui->label_numbre_2);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    QRectF rect(14.0*number_car_time,14.0*number_car_time,13.60*number_car_time,20.80*number_car_time);
    painter.drawImage(rect,*image_number_car);

}
/*
 * 控制标题栏图标隐藏显示函数
 */
void Widget::show_titlebar(int num, bool temp)
{
    switch (num) {
    case 1:
    {
        if(temp){
            ui->label_titlebar_1->show();
        }
        else
        {
            ui->label_titlebar_1->hide();
        }
        break;
    }
    case 2:
    {
        if(temp){
            ui->label_titlebar_2->show();
        }
        else
        {
            ui->label_titlebar_2->hide();
        }
        break;
    }
    case 3:
    {
        if(temp){
            ui->label_titlebar_3->show();
        }
        else
        {
            ui->label_titlebar_3->hide();
        }
        break;
    }
    case 4:
    {
        if(temp){
            ui->label_titlebar_4->show();
        }
        else
        {
            ui->label_titlebar_4->hide();
        }
        break;
    }
    case 5:
    {
        if(temp){
            ui->label_titlebar_5->show();
        }
        else
        {
            ui->label_titlebar_5->hide();
        }
        break;
    }
    case 6:
    {
        if(temp){
            ui->label_titlebar_6->show();
        }
        else
        {
            ui->label_titlebar_6->hide();
        }
        break;
    }
    case 7:
    {
        if(temp){
            ui->label_titlebar_7->show();
        }
        else
        {
            ui->label_titlebar_7->hide();
        }
        break;
    }
    default:
        break;
    }

}

/*
 * 绘制右侧水温条函数
 */
void Widget::draw_Rline_1()
{
    QPainter painer(ui->label_rline_1);
    painer.setRenderHint(QPainter::Antialiasing,true);
    if((135.0/290.0*pointer_angle)<115)
    {
        painer.setBrush(QBrush(QColor(0,255,0)));
    }
    else
    {
        painer.setBrush(QBrush(QColor(255,0,0)));
    }
    painer.drawRect(0,135.0-(135.0/290.0*pointer_angle),60,(135.0/290.0*pointer_angle));

}
/*
 * 绘制右侧油量条函数
 */
void Widget::draw_Rline_2()
{
    QPainter painer(ui->label_rline_2);
    painer.setRenderHint(QPainter::Antialiasing,true);
    if((135.0/290.0*pointer_angle)<22)
    {
        painer.setBrush(QBrush(QColor(255,0,0)));
    }
    else
    {
        painer.setBrush(QBrush(QColor(0,255,0)));
    }
    painer.drawRect(0,135.0-(135.0/290.0*pointer_angle),60,(135.0/290.0*pointer_angle));
}

void Widget::show_widget_statbar(double num)
{
    statebar_opacity->setOpacity(num);
    //    if(ui->widget_statebar->isHidden())
    //    {

    //        ui->widget_statebar->show();
    //    }
    //    ui->widget_statebar->setWindowOpacity(num);
    //    ui->label_statebackground->setWindowOpacity(num);
    //    else
    //    {
    //        ui->widget_statebar->hide();
    //    }


    //    qDebug()<<num;
}

void Widget::set_statebar_data()
{
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm");
    //年
    ui->label_state_1->set_number(current_date.mid(0,1).toInt());
    ui->label_state_2->set_number(current_date.mid(1,1).toInt());
    ui->label_state_3->set_number(current_date.mid(2,1).toInt());
    ui->label_state_4->set_number(current_date.mid(3,1).toInt());
    //月
    ui->label_state_5->set_number(current_date.mid(5,1).toInt());
    ui->label_state_6->set_number(current_date.mid(6,1).toInt());
    //日
    ui->label_state_7->set_number(current_date.mid(8,1).toInt());
    ui->label_state_8->set_number(current_date.mid(9,1).toInt());
    //时间
    ui->label_state_9->set_number(current_date.mid(11,1).toInt());
    ui->label_state_10->set_number(current_date.mid(12,1).toInt());
    ui->label_state_11->set_number(current_date.mid(14,1).toInt());
    ui->label_state_12->set_number(current_date.mid(15,1).toInt());
}

void Widget::set_statebar_trip()
{
    QString number = QString::number((double)(pointer_angle*2.1),'f',1);

    int temp = number.length();

    switch (temp) {
    case 3:
        ui->label_state_16->set_number(number.mid(2,1).toInt());
        ui->label_state_15->set_number(number.mid(0,1).toInt());
        ui->label_state_14->hide();
        ui->label_state_13->hide();
        break;
    case 4:
        ui->label_state_16->set_number(number.mid(3,1).toInt());
        ui->label_state_15->set_number(number.mid(1,1).toInt());
        ui->label_state_14->show();
        ui->label_state_14->set_number(number.mid(0,1).toInt());
        ui->label_state_13->hide();
        break;
    case 5:
        ui->label_state_16->set_number(number.mid(4,1).toInt());
        ui->label_state_15->set_number(number.mid(2,1).toInt());
        ui->label_state_14->show();
        ui->label_state_13->show();
        ui->label_state_14->set_number(number.mid(1,1).toInt());
        ui->label_state_13->set_number(number.mid(0,1).toInt());
        break;
    default:
        break;
    }
}

void Widget::set_statebar_odo()
{
    QString number = QString::number((int)(pointer_angle*20.1),10);

    int temp = number.length();
    switch (temp) {
    case 1:
            ui->label_state_21->set_number(number.mid(0,1).toInt());
            ui->label_state_20->hide();
            ui->label_state_19->hide();
            ui->label_state_18->hide();
            ui->label_state_17->hide();
        break;
    case 2:
        ui->label_state_21->set_number(number.mid(1,1).toInt());
        ui->label_state_20->show();
        ui->label_state_21->set_number(number.mid(0,1).toInt());
        ui->label_state_19->hide();
        ui->label_state_18->hide();
        ui->label_state_17->hide();
        break;
    case 3:
        ui->label_state_21->set_number(number.mid(2,1).toInt());
        ui->label_state_20->show();
        ui->label_state_20->set_number(number.mid(1,1).toInt());
        ui->label_state_19->show();
        ui->label_state_19->set_number(number.mid(0,1).toInt());
        ui->label_state_18->hide();
        ui->label_state_17->hide();
        break;
    case 4:
        ui->label_state_21->set_number(number.mid(3,1).toInt());
        ui->label_state_20->show();
        ui->label_state_20->set_number(number.mid(2,1).toInt());
        ui->label_state_19->show();
        ui->label_state_19->set_number(number.mid(1,1).toInt());
        ui->label_state_18->show();
        ui->label_state_18->set_number(number.mid(0,1).toInt());
        ui->label_state_17->hide();
        break;
    case 5:
        ui->label_state_21->set_number(number.mid(4,1).toInt());
        ui->label_state_20->show();
        ui->label_state_20->set_number(number.mid(3,1).toInt());
        ui->label_state_19->show();
        ui->label_state_19->set_number(number.mid(2,1).toInt());
        ui->label_state_18->show();
        ui->label_state_18->set_number(number.mid(1,1).toInt());
        ui->label_state_17->show();
        ui->label_state_17->set_number(number.mid(0,1).toInt());
        break;
    default:
        break;
    }
}
