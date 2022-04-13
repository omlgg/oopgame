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
    Entity();
    ~Entity();
    Entity(int hp,int atk,int def,int buf,int debuf,int lvl,int agi);


    void DecreaseHealth(int k);
    int AttackPoint();
    int DefensePoint();
};

#endif // ENTITY_H
