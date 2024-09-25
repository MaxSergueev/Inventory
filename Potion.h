#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Potion : public Item {
private:
    int uses;
    int efficiency;

public:
    Potion(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int uses, int efficiency);

    void use() override;
};

