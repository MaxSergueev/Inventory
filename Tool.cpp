#pragma once
#include "Tool.h"
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;

Tool::Tool(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int efficiency, string function)
    : Item(name, itemType, imgLocation, description, value, weight, effects), efficiency(efficiency), function(function) {}

// Getters
void Tool::getName() const {
    cout << "this tool is named: " << name << endl;
}

void Tool::getItemtype() const {
    cout << "This is a " << itemType << " tool." << endl;
}

void Tool::getDescription() const {
    cout << "Item description: " << description << endl;
}

void Tool::getValue() const {
    cout << "This tool is worth " << value << " coins." << endl;
}

void Tool::getWeight() const {
    cout << "This tool weighs " << weight << " Kgs." << endl;
}

void Tool::getEffects() const {
    cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }
}

void Tool::getEfficiency() const{
    cout << name << " has an efficiency of " << efficiency << endl;
}

void Tool::getFunction() const {
    cout << name << " is used for " << function << endl;
}

void Tool::use() {
    cout << "You used your " << name << " to " << function << ". " << "Its efficiency is " << efficiency << endl;
}