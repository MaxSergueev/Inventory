#include <iostream>
#include <map>
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
#include "Accessories.h"
#include "Potion.h"
#include "Tool.h"
#include "InventorySystem.h"
#include "raylib.h"
#include "vector"
#include "string"

using namespace std;

int main() {

    //Texture2D swordImage = LoadTexture("Images/Weapon & Tool/Silver Sword.png");
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

    map<string, int> toolEffects;

    Weapon sword(
        "Flame Sword",
        "Great Sword",
        "Images/Weapon & Tool/Silver Sword.png",
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
        "Images/Equipment/Helm.png",
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
        "Images/Ore & Gem/Pearl.png",
        "A ring worn by ancient thieves who worshipped a forgotten trickster god.",
        300,
        0.3,
        ringEffects,
        "Ancient Trickster",
        "Finger"
    );

    Potion healthPotion(
        "Health Potion",
        "Buff potion",
        "Images/Potion/Red Potion 2.png",
        "A common health potion, though mostly only nobles can afford it.",
        10,
        0.1,
        potionEffects,
        5,
        10
    );

    Tool pickaxe(
        "Pickaxe",
        "mining",
        "Images/Weapon & Tool/Pickaxe.png",
        "a rusted pickaxe, it has seen better days.",
        5,
        5.0,
        toolEffects,
        3,
        "mining"
    );

    //Initiate InventorySysten
    InventorySystem inventory;

    //Push items into inventory
    inventory.populateInventory(&sword);
    inventory.populateInventory(&healthPotion);
    inventory.populateInventory(&helm);
    inventory.populateInventory(&pickaxe);
    inventory.populateInventory(&ring);

    //inventory.printInventory(); //For debugging
    inventory.drawInventory();

    return 0;
}