#ifndef ENTITY_H
#define ENTITY_H
#include <string>
#include <iostream>
using namespace std;

class Entity
{
private:
    int health,atk,def,buf,debuf,level,agility;

public:
    string Name;
    ~Entity();
    Entity(int hp=100,int atk=10,int def=10,int buf=0,int debuf=0,int lvl=1,int agi=1);


    void DecreaseHealth(int k);
    int AttackPoint();
    int DefensePoint();
};

#endif // ENTITY_H
