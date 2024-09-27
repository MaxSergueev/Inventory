#include "InventorySystem.h"
#include "Item.h"
#include "iostream"
#include "fstream"
#include "raylib.h"
#include <sstream>
#include "map"
#include "string"

using namespace std;

InventorySystem::InventorySystem(){}

void InventorySystem::populateInventory(Item* item){

	inventory.push_back(item);

    string imgLocation = item->getImgLocation();
    imageLocations.push_back(imgLocation);
}

void InventorySystem::printInventory() {
	for (size_t i = 0; i < inventory.size(); i++)
	{
		inventory[i]->getName();
        cout << imageLocations[i] << endl;
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

        vector <Texture2D> textures;

        Font fonts[8] = { 0 };

        fonts[0] = LoadFont("resources/fonts/alagard.png");
        fonts[1] = LoadFont("resources/fonts/pixelplay.png");
        fonts[2] = LoadFont("resources/fonts/mecha.png");
        fonts[3] = LoadFont("resources/fonts/setback.png");
        fonts[4] = LoadFont("resources/fonts/romulus.png");
        fonts[5] = LoadFont("resources/fonts/pixantiqua.png");
        fonts[6] = LoadFont("resources/fonts/alpha_beta.png");
        fonts[7] = LoadFont("resources/fonts/jupiter_crash.png");

        for (int i = 0; i < inventory.size(); i++)
        {
            const char* c = imageLocations[i].c_str();
            textures.push_back(LoadTexture(c));

        }

        while (!WindowShouldClose())
        {
            BeginDrawing();
            ClearBackground(RAYWHITE);

            //Large rectangle to show selected item info
            DrawRectangleRounded(
                Rectangle{ 450, 120, 500, 400 },
                roundness,
                segments,
                rectColor
            );

            //For loop to draw empty slots, then "fill" them with an item image if there is an item
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

                    int index = row * cols + col;

                    // Draw the texture if there's an item in this slot
                    if (index < inventory.size()) {
                        DrawTexture(textures[index], posX + 8, posY + 10, WHITE);
                    }

                    //Check if mouse is inside of a square with an item, print item info
                    if (CheckCollisionPointRec(GetMousePosition(), Rectangle{ posX, posY, rectWidth, rectHeight }) && index < inventory.size())
                    {
                        //cout << index << endl; //DEBUG MSG
                        DrawTextureEx(textures[index], {650, 130}, 0, 3, WHITE);

                        //Show item's name
                        string name = inventory[index]->getName();
                        const char* cn = name.c_str();
                        DrawTextEx(fonts[0], cn, {455, 250}, 20, 1, WHITE);

                        //Show item's type
                        string type = inventory[index]->getItemtype();
                        const char* ci = type.c_str();
                        DrawTextEx(fonts[0], ci, { 455, 275 }, 20, 1, WHITE);

                        //Show item's value
                        string value = "Worth " + to_string(inventory[index]->getValue()) + " gold coins";
                        const char* cv = value.c_str();
                        DrawTextEx(fonts[0], cv, { 455, 300 }, 20, 1, WHITE);

                        //Show item's weight
                        ostringstream oss;
                        oss.precision(2);
                        oss << fixed << inventory[index]->getWeight();
                        string weight = "Weighs " + oss.str() + " Kgs";
                        const char* cw = weight.c_str();
                        DrawTextEx(fonts[0], cw, { 455, 325 }, 20, 1, WHITE);

                        //Show item's description
                        string description = inventory[index]->getDescription();
                        const char* cd = description.c_str();
                        DrawTextEx(fonts[0], cd, { 455, 350 }, 10, 1, WHITE);

                        //If left mouse button is held, show using the item.
                        string used = inventory[index]->use();
                        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
                            const char* cu = used.c_str();
                            DrawTextEx(fonts[0], cu, { 30, 30 }, 20, 1, rectColor);
                        }


                    }

                }
            }

            EndDrawing();
        }

        for (int i = 0; i < inventory.size(); i++)
        {
            UnloadTexture(textures[i]);
        }

        CloseWindow();
}