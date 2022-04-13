#include "Entity.h"


Entity::~Entity()
{
    //dtor
    cout<<"burh burh lmao\n";
}

Entity::Entity(int hp,int atk,int def,int buf,int debuf,int lvl,int agi )
{
    //ctor
    this->health = hp;
    this->atk = atk;
    this->def = def;
    this->buf = buf;
    this->debuf = debuf;
    this->level = lvl;
    this->agility = agi;
}


void Entity::DecreaseHealth(int k)
{
    if (health <= k) delete this;
    else health -= k;
}
int Entity::AttackPoint()
{
    return Entity::atk;
}
int Entity::DefensePoint()
{
    return Entity::def;
}
