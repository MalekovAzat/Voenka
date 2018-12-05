
#include<QtWidgets>
#include"desk.h"

//#include"variablepicture.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget  parent(0);
    MyDesk b(&parent,1,10);

    parent.resize(1022,692);
    parent.show();
    b.resize(1022,692);
    b.show();

    return a.exec();
}
