#ifndef CRISTALBUTTON_H
#define CRISTALBUTTON_H
#include <QtWidgets>

class CristalButton : public QPushButton
{
    Q_OBJECT
public:
    int number_in_order;
    CristalButton(QWidget *parent = 0, int num = -1);//конструктор
signals:
    void sendNumber(int);

public slots:
    void getMyNumber();

};

#endif // CRISTALBUTTON_H
