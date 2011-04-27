#ifndef BITSET_H
#define BITSET_H
#include <cmath>
#include <iostream>


using namespace std;
class Bitset
{
public:
    Bitset(int entries);
    void addMember(int cual);
    void deleteMember(int cual);
    bool isMember(int cual);

private:
    char *elementos;
    int MAX;
    int maxEles;
};

#endif // BITSET_H
