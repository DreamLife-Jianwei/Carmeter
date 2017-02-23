#ifndef MQLABEL_H
#define MQLABEL_H

#include <QObject>
#include <QLabel>
#include <QTimer>
class MQlabel : public QLabel
{
    Q_OBJECT
public:
    explicit MQlabel(QWidget *parent = 0);

    void glitter(bool temp = false);
signals:

private slots:
    void timerout_glitter();

private:
    QTimer* timer;
};

#endif // MQLABEL_H
