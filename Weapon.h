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
    Weapon(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int damage, int range);

    //Inherited Getters
    string getName() const override;
    string getItemtype() const override;
    map<string, int> getEffects() const override;

    //Unique Getters
    int getDamage() const;
    int getRange() const;

    string use() override;

    string getAttributes() override;
};