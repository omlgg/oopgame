#include "Equipment.h"

Equipment::Equipment()
{
    //ctor
}

Equipment::~Equipment()
{
    //dtor
}
Equipment::Equipment(int bmp,int batk,int bdef,int bagi)
{
    bonus_mp = bmp;
    bonus_atk = batk;
    bonus_def = bdef;
    bonus_agi = bagi;
}
