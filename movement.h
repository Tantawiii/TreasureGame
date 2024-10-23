#pragma once
#include "collision.h"
#include <conio.h>

void handleMovement(char border[10][10], int playerX, int playerY) {
    if (_kbhit()) {
        char movement = _getch();
        int tempX = playerX, tempY = playerY;

        if (movement == 'w') {
            tempX--;
        }
        else if (movement == 's') {
            tempX++;
        }
        else if (movement == 'a') {
            tempY--;
        }
        else if (movement == 'd') {
            tempY++;
        }
        else {
            return;
        }
        if(isValidMove(border, tempX, tempY)){
            border[playerX][playerY] = ' ';
            playerX = tempX;
            playerY = tempY;
            border[playerX][playerY] = 'O';
        }
    }
}