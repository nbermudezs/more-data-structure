#include <QtCore/QCoreApplication>
#include <iostream>
#include "hashset.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Hashset hash(23);
    hash.addMember("Yo");
    hash.addMember("Me");
    hash.addMember("Nestor");
    hash.addMember("NABS");
    if(hash.isMember("Yo"))
        cout<<"Es miembro"<<endl;

    if(hash.isMember("Me"))
        cout<<"Es miembro"<<endl;

    if(hash.isMember("Yo0"))
        cout<<"Es miembro"<<endl;

    hash.deleteMember("Yo");
    if(hash.isMember("Yo"))
        cout<<"Es miembro"<<endl;

    return a.exec();
}
