#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

class Equipment
{
    int bonus_mp,bonus_atk,bonus_def,bonus_agi;
    string Name;
    friend class Player;
    public:
        Equipment();
        ~Equipment();

};

#endif // EQUIPMENT_H
