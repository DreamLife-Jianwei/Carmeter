#ifndef NUMBER_1_H
#define NUMBER_1_H

#include <QWidget>

namespace Ui {
class Number_1;
}

class Number_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Number_1(QWidget *parent = 0);
    ~Number_1();
    void set_number(int num = 0);

private:
    Ui::Number_1 *ui;
};

#endif // NUMBER_1_H
