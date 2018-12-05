#ifndef DESK_H
#define DESK_H

#include<QtWidgets>
#include<QFile>
#include"cristalbutton.h"
#include"variablepicture.h"

class MyDesk : public QWidget
{
    Q_OBJECT
private:
    int deskNumber;

    int crisButCount,
        anviCount,
        tumCoutn,
        redimgCount,
        blackImgCount;

    QString path;

    CristalButton** crButtons;

    VariablePicture** vAnvils;
    VariablePicture** vTumblers;
    VariablePicture** vRedImg;
    VariablePicture** vBlackImg;

    QList<QList<QString>* >* coordList;


    //указатель на стек
    //указатель на класс со спидометрами


public:
    void getCoordFromFile();// возвращает списки с координатами элементов
    void createAndDrowElem();// создание и вставка элементов
    void paintEvent(QPaintEvent *);
    MyDesk(QWidget *parent , int deskNumber, int cristButCount);//конструктор
};

#endif // DESK_H
