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

    //Inherited Getters
    void getName() const override;
    void getItemtype() const override;
    void getRarity() const override;
    void getDescription() const override;
    void getValue() const override;
    void getWeight() const override;
    void getEffects() const override;

    //Unique Getters
    void getDamage() const;
    void getRange() const;

    void use() override;
};

