#include <iostream>
#include <map>
#include "Item.h"
#include "Weapon.h"

using namespace std;

int main() {
    
    map<string, int> swordEffects = {
        {"durability", 100},
        {"burn", 10}
    };

    Weapon sword(
        "Flame Sword",
        "Weapon",
        "Rare",
        "A sword imbued with flames, dealing extra fire damage.",
        2000,
        5.0,
        swordEffects,
        50,
        5
    );

    sword.use();

    return 0;
}