#include <QtCore/QCoreApplication>
#include <iostream>
#include "bitset.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Bitset bits(32);
    bits.addMember(2);
    cout<<bits.getCuantos()<<endl;
    if(bits.isMember(2))
        cout<<"Es miembro";
    else
        cout<<"No es miembro";

    if(bits.isMember(10))
        cout<<"Es miembro!!???";

    return a.exec();
}
