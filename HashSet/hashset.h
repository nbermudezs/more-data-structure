#ifndef HASHSET_H
#define HASHSET_H
#include <QString>
#include <QStringList>

using namespace std;
class Hashset
{
public:
    Hashset(int S);
    void addMember(QString dato);
    void deleteMember(QString dato);
    bool isMember(QString dato);

private:
    QStringList *elementos;
    int HashFunction(QString dato);
    int Size,count;
};

#endif // HASHSET_H
