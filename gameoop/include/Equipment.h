#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <bits/stdc++.h>
#include "Player.h"

using namespace std;

class Equipment
{
    int bonus_mp,bonus_atk,bonus_def,bonus_agi;
    string Name;
    friend class Player;
    public:
        Equipment();
        Equipment(int bmp = 0,int batk =0 ,int bdef = 0,int bagi = 0);
        ~Equipment();

};

#endif // EQUIPMENT_H
