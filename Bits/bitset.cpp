#include "bitset.h"

Bitset::Bitset(int entries)
{
    this->arreglo=new mybyte[entries/8+1];
    this->MAX=entries;
    for(int i=0;i<entries;i++)deleteMember(i);
    cuantos=0;
}

void Bitset::addMember(int cual)
{
    if(cual>MAX)return;
    changeStatus(cual,1);
    cuantos++;
}

void Bitset::deleteMember(int cual)
{
    if(cual>MAX)return;
    changeStatus(cual,0);
    cuantos--;
}

void Bitset::changeStatus(int cual, int onOf)
{
    int arrPos=cual/8;
    int bitPos=cual%8;
    switch(bitPos)
    {
    case 0:
        arreglo[arrPos].b0=onOf;
        break;
    case 1:
        arreglo[arrPos].b1=onOf;
        break;
    case 2:
        arreglo[arrPos].b2=onOf;
        break;
    case 3:
        arreglo[arrPos].b3=onOf;
        break;
    case 4:
        arreglo[arrPos].b4=onOf;
        break;
    case 5:
        arreglo[arrPos].b5=onOf;
        break;
    case 6:
        arreglo[arrPos].b6=onOf;
        break;
    case 7:
        arreglo[arrPos].b7=onOf;
        break;
    }
}

bool Bitset::isMember(int cual)
{
    int arrPos=cual/8;
    int bitPos=cual%8;
    switch(bitPos)
    {
    case 0:
        if(arreglo[arrPos].b0==1)
        return true;
        break;
    case 1:
        if(arreglo[arrPos].b1==1)
        return true;
        break;
    case 2:
        if(arreglo[arrPos].b2==1)
        return true;
        break;
    case 3:
        if(arreglo[arrPos].b3==1)
        return true;
        break;
    case 4:
        if(arreglo[arrPos].b4==1)
        return true;
        break;
    case 5:
        if(arreglo[arrPos].b5==1)
        return true;
        break;
    case 6:
        if(arreglo[arrPos].b6==1)
        return true;
        break;
    case 7:
        if(arreglo[arrPos].b7==1)
        return true;
        break;
    }return false;
}

Bitset::~Bitset()
{
    delete this->arreglo;
}
