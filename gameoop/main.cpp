#include <bits/stdc++.h>
#include "Entity.h"
#include "Player.h"

using namespace std;

int main()
{
    Player * lmao = new Player(100);
    lmao->Enter_Name();
    lmao->DecreaseHealth(100);
    Equipment Excalibur(1000, 1000, 1000, 1000);
    lmao->Equip_Item(Excalibur);
    return 0;
}
