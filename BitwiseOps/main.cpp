#include <QtCore/QCoreApplication>
#include <iostream>
#include "bitset.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Bitset bits(32);
    bits.addMember(13);

    if(bits.isMember(13))
        cout<<"Existe!!!!"<<endl;
    bits.deleteMember(13);

    if(bits.isMember(13))
        cout<<"Existe!!!!"<<endl;



    return a.exec();
}
