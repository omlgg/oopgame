#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"
#include "Equipment.h"
#include <string>
#include <vector>

using namespace std;

class Player : protected Entity
{
    vector<Equipment> Slot;
    int MP, MPregen;
    public:
        Player();
        Player(int hp = 100,int Atk= 10,int Def = 10,int Buf = 0,int Debuf = 0,int Lvl = 1,int Agi = 1);
        void Enter_Name();
        void Equip_Item(Equipment a);
        void Unequip_Item(Equipment a);

};

#endif // PLAYER_H
