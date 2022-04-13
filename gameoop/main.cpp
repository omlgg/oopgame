#include <bits/stdc++.h>
#include "Entity.h"
#include "Player.h"

using namespace std;

int main()
{
    Player * lmao = new Player(100);
    lmao->Enter_Name();
    Equipment Excalibur(1000, 1000, 1000, 1000);
    lmao->Equip_Item(Excalibur);
    Player * burh = new Player(1000);
    burh->Enter_Name();
    burh->DecreaseHealth(lmao->AttackPoint() - burh->DefensePoint());
    return 0;
}
