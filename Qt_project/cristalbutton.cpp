#include "cristalbutton.h"

CristalButton::CristalButton(QWidget *parent,int numInOr) : QPushButton(parent)
{
    this->number_in_order = numInOr;
    this->setStyleSheet("background:rgba(225,255,255,100)");//задание внешнего вида

    //    connect(this,SIGNAL(clicked()),this,SLOT(getMyNumber()));
}

void CristalButton::getMyNumber(){
    emit sendNumber(number_in_order);
}

