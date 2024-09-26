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

using namespace std;

int main() {

    InventorySystem inventory;
    inventory.drawInventory();

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

    Potion healthPotion(
        "Health Potion",
        "Buff potion",
        "common",
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
        "common",
        "a rusted pickaxe, it has seen better days.",
        5,
        5.0,
        toolEffects,
        3,
        "mining"
    );

    //using Item children tests
    //sword.use();        //weapon
    //helm.use();         //armor
    //ring.use();         // accessory
    //healthPotion.use(); //potion
    //pickaxe.use(); // tool

 /* sword.getName();
    sword.getItemtype();
    sword.getRarity();
    sword.getDescription();
    sword.getValue();
    sword.getWeight();
    sword.getEffects();
    sword.getDamage();
    sword.getRange();*/

   /* helm.getName();
    helm.getItemtype();
    helm.getRarity();
    helm.getDescription();
    helm.getValue();
    helm.getWeight();
    helm.getEffects();
    helm.getDefense();
    helm.getSlot();*/

    /*ring.getName();
    ring.getItemtype();
    ring.getRarity();
    ring.getDescription();
    ring.getValue();
    ring.getWeight();
    ring.getEffects();
    ring.getAlignment();
    ring.getSlot();*/

    //healthPotion.getName();
    //healthPotion.getItemtype();
    //healthPotion.getRarity();
    //healthPotion.getDescription();
    //healthPotion.getValue();
    //healthPotion.getWeight();
    //healthPotion.getEffects();
    //healthPotion.getUses();
    //healthPotion.getEfficiency();

    //pickaxe.getName();
    //pickaxe.getItemtype();
    //pickaxe.getRarity();
    //pickaxe.getDescription();
    //pickaxe.getValue();
    //pickaxe.getWeight();
    //pickaxe.getEffects();
    //pickaxe.getFunction();
    //pickaxe.getEfficiency();

    ////sword.use();
    ////helm.use();
    ////ring.use();
    ////healthPotion.use();
    //pickaxe.use();

    inventory.populateInventory(&sword);
    inventory.populateInventory(&ring);
    inventory.populateInventory(&pickaxe);
    inventory.populateInventory(&helm);
    inventory.populateInventory(&healthPotion);
    inventory.printInventory();

    return 0;
}