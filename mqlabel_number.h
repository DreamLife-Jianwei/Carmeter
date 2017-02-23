#ifndef MQLABEL_NUMBER_H
#define MQLABEL_NUMBER_H

#include <QObject>
#include <QLabel>
class MQlabel_Number : public QLabel
{
    Q_OBJECT
public:
    explicit MQlabel_Number(QWidget *parent = 0);

    void set_number(int num = 0);
signals:

public slots:
};

#endif // MQLABEL_NUMBER_H
