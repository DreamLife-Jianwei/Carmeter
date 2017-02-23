#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPixmap>
#include <QImage>
#include <QGraphicsOpacityEffect>
#include "number_1.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_timer_clicked();

    void slot_timeout_timer_pointer();

    void slot_timerout_lline_self_inspection();

    void slot_timerout_number_car();

    void slot_timerout_titlebar_glitter();

    void slot_timerout_show_widget_statbar();


private:
    Ui::Widget *ui;

    QTimer *timer_pointer,*timer_Lline_Start,*timer_number_car,*timer_titlebar_glitter,*timer_statebar;

    QPixmap* pixmap_pointer;

    QImage* image_number_car;

    Number_1* number_center;

    QGraphicsOpacityEffect *statebar_opacity;


private:
    void show_Lline(int num);

    bool eventFilter(QObject *watched, QEvent *event);

    void draw_number_pointer();

    void draw_number_car();

    void show_titlebar(int num,bool temp);

    void draw_Rline_1();

    void draw_Rline_2();

    void show_widget_statbar(double num);

    void set_statebar_data();

    void set_statebar_trip();

    void set_statebar_odo();

};

#endif // WIDGET_H
