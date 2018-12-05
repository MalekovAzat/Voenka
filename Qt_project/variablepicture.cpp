#include "variablepicture.h"
VariablePicture::VariablePicture(QWidget *parent ,QString fileName, int deskNumber, int defPos):QLabel(parent){

    this->style = "background-image:url(" + QCoreApplication::applicationDirPath() + "/resourses/" + "desk" +QString::number(deskNumber) + "/images/" + fileName;
    this->setMode(defPos);
}

void VariablePicture::setMode(int mode){
    QString finalStyle = this->style+"_m_"+QString::number(mode)+".png"+")";

    this->setStyleSheet(finalStyle);
}

void VariablePicture::setPosotion(QString coordStr){
    int coord[4];
    QStringList coordList = coordStr.split(',');
    for(int i = 0;i < 4;i++){
        coord[i] = coordList.value(i).toInt();
    }
    this->setGeometry(coord[0],coord[1],coord[2],coord[3]);
}
