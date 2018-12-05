#ifndef VARIABLEPICTURE_H
#define VARIABLEPICTURE_H
#include<QtWidgets>

class VariablePicture: public QLabel
{
    Q_OBJECT
private:
    QString style;//строка со стилем
public:
    void setPosotion(QString ccoords);
    VariablePicture(QWidget *parent = 0,QString fileName="",int deskNumber = -1,int defPos=-1);//конструктор
public slots:
    void setMode(int mode);
};

#endif // VARIABLEPICTURE_H
