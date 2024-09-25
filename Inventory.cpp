#include <iostream>
#include <map>
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
#include "Accessories.h"

using namespace std;

int main() {

    map<string, int> swordEffects = {
        {"durability", 100}
    };

    map<string, int> helmEffects = {
        {"frost", 100}
    };

    map<string, int> ringEffects = {
        {"speed", 10}
    };

    map<string, int> potionEffects = {
        {"Healing", 100}
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

    Armor helm(
        "Odins Helm",
        "Helm",
        "Legendary",
        "legend has it that Odin himself once wore this helm.",
        5000,
        5.0,
        helmEffects,
        50,
        "Head"
    );

    Accessories ring(
        "Speed ring",
        "Ring",
        "Epic",
        "A ring worn by ancient thieves who worshipped a forgotten trickster god.",
        300,
        0.3,
        ringEffects,
        "Ancient Trickster",
        "Finger"
    );



    //sword.use();
    //sword.getDamage();
    //sword.getName();
    //sword.getEffects();

    helm.use();
    ring.use();

    return 0;
}