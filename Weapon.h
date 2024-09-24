#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Weapon : public Item {
private:
    int damage;
    int range;

public:
    Weapon(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int damage, int range);

    int getDamage() const;
    int getRange() const;


    void use() override;
};

