#include "bitset.h"

Bitset::Bitset(int entries)
{
    this->MAX=entries;
    this->maxEles=entries/8+1;
    this->elementos=new char[entries/8+1];
    for(int i=0;i<maxEles;i++)elementos[i]=97;
}

void Bitset::addMember(int cual)
{
    if(cual>MAX) return;
    int arrPos=cual/8;
    int bitPos=cual%8;
    cout<<elementos[arrPos]<<endl;
    char n=pow(2,7-bitPos);
    elementos[arrPos]=elementos[arrPos]|n;
    cout<<elementos[arrPos]<<endl;
}

void Bitset::deleteMember(int cual)
{
    if(cual>MAX) return;
    int arrPos=cual/8;
    int bitPos=cual%8;
    char n=1;
    n=n<<(7-bitPos);
    n=~n;
    cout<<elementos[arrPos]<<endl;
    elementos[arrPos]=elementos[arrPos]&n;
    cout<<elementos[arrPos]<<endl;
}

bool Bitset::isMember(int cual)
{
    if(cual>MAX) return false;
    int arrPos=cual/8;
    int bitPos=cual%8;

    char n=1;
    n=n<<(7-bitPos);
    if((n&elementos[arrPos])==0)
        return false;
    return true;
}
