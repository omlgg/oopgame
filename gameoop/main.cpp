#include <bits/stdc++.h>
#include "Entity.h"
#include "Player.h"

using namespace std;
#define ATTACK(a,b) b->DecreaseHealth(a->AttackPoint() - b->DefensePoint())
int main()
{
    Player * lmao = new Player(100);
    lmao->Enter_Name();
    Equipment Excalibur(1000, 1000, 1000, 1000);
    lmao->Equip_Item(Excalibur);
    Player * burh = new Player(1000);
    burh->Enter_Name();
    ATTACK(lmao, burh);
    return 0;
}
