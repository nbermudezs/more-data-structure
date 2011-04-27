#include "hashset.h"

Hashset::Hashset(int S)
{
    elementos=new QStringList[S];
    this->Size=S;
    this->count=0;
}

int Hashset::HashFunction(QString dato)
{
    int suma=0;
    for(int i=0;i<dato.length();i++)
    {
        suma+=dato.at(i).toAscii();
    }
    return suma%Size;
}

void Hashset::addMember(QString dato)
{
    if(!isMember(dato)){
        int pos=HashFunction(dato);
        elementos[pos].push_back(dato);
        count++;
    }
}

void Hashset::deleteMember(QString dato)
{
    int pos=HashFunction(dato);
    if(elementos[pos].removeAll(dato)!=-1)
        count--;
}

bool Hashset::isMember(QString dato)
{
    int pos=HashFunction(dato);
    if(elementos[pos].contains(dato))
        return true;
    return false;
}
