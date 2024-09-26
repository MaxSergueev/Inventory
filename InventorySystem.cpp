#include "InventorySystem.h"
#include "Item.h"
#include "iostream"
#include "fstream"
#include "raylib.h"

using namespace std;

InventorySystem::InventorySystem(){}

void InventorySystem::populateInventory(Item* item){

	inventory.push_back(item);
}

void InventorySystem::printInventory() {
	for (size_t i = 0; i < inventory.size(); i++)
	{
		inventory[i]->getName();
	}
}

void InventorySystem::drawInventory() {
        InitWindow(1000, 600, "inventory");

        const int rows = 5;
        const int cols = 5;
        const int rectWidth = 50;
        const int rectHeight = 50;
        const int padding = 20;
        const float roundness = 0.3f;
        const int segments = 8;
        const Color rectColor = DARKBLUE;
        const Color borderColor = WHITE;

        int startX = 100;
        int startY = 150;

        while (!WindowShouldClose())
        {
            BeginDrawing();
            ClearBackground(RAYWHITE);

            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    float posX = startX + col * (rectWidth + padding);
                    float posY = startY + row * (rectHeight + padding);

                    DrawRectangleRounded(
                        Rectangle{ posX, posY, rectWidth, rectHeight}, 
                        roundness,
                        segments,   
                        rectColor   
                    );

                }
            }

            DrawRectangleRounded(
                Rectangle{ 450, 120, 500, 400 },
                roundness,
                segments,
                rectColor
            );

            EndDrawing();
        }

        CloseWindow();
}