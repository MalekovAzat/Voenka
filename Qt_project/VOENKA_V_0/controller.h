#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<QtWidgets>

class desk;//виджет с пультом
class info_desk;//виджет с информацией о пульте

class Controller:public QWidget
{
    Q_OBJECT

public:
    Controller();//конструктор принимает имя картинки координаты кнопок
};


class Desk:public QWidget
{
    Q_OBJECT
private:

public:
//    Desk(QString name_of_desk,int** tableOfButton);

};

#endif // CONTROLLER_H

