#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Tool : public Item {
private:
    int efficiency;
    string function;

public:
    Tool (string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int efficiency, string function);

    //Inherited Getters
    void getName() const override;
    void getItemtype() const override;
    void getDescription() const override;
    void getValue() const override;
    void getWeight() const override;
    void getEffects() const override;

    //Unique Getters
    void getEfficiency() const;
    void getFunction() const;

    void use() override;
};

