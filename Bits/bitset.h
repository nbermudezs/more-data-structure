#ifndef BITSET_H
#define BITSET_H
#include <stdlib.h>
#include <iostream>

using namespace std;

struct mybyte
{
    unsigned char b0:1;
    unsigned char b1:1;
    unsigned char b2:1;
    unsigned char b3:1;
    unsigned char b4:1;
    unsigned char b5:1;
    unsigned char b6:1;
    unsigned char b7:1;
};


class Bitset
{
private:
    mybyte *arreglo;
    int MAX;
    void changeStatus(int cual,int onOf);
    int cuantos;
public:
    Bitset(int entries);
    void addMember(int cual);
    void deleteMember(int cual);
    bool isMember(int cual);
    int getCuantos(){return cuantos;}
    ~Bitset();

};

#endif // BITSET_H
