#include "Player.h"
#include "Equipment.h"
Player::Player()
{
    //ctor
}
Player::Player(int hp,int Atk,int Def,int Buf,int Debuf,int Lvl,int Agi) : Entity(hp, Atk,Def,Buf,Debuf,Lvl, Agi)
{

}
void Player::Enter_Name()
{
    cout<<"Enter your name, hero:\n";
    cin>>Entity::Name;
    cout<<"Welcome, "<<Entity::Name<<"\n";
}
void Player::Equip_Item(Equipment a)
{
    Player::atk += a.bonus_atk;
    Player::def += a.bonus_def;
    Player::agility += a.bonus_agi;
    Player::MP += a.bonus_mp;
    Player::Slot.push_back(a);

}
