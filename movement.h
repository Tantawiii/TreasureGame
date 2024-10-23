#pragma once
#include "collision.h"
#include <conio.h>

void handleMovement(char border[10][10], int& playerX, int& playerY, bool& gameOver) {
    if (_kbhit()) {
        char movement = _getch();
        int tempX = playerX, tempY = playerY;

        switch (movement) {
        case 'w': tempX--; break;
        case 's': tempX++; break;
        case 'a': tempY--; break;
        case 'd': tempY++; break;
        default: return;
        }

        if (isValidMove(border, tempX, tempY,gameOver)) {
            border[playerX][playerY] = ' ';
            playerX = tempX;
            playerY = tempY;
            border[playerX][playerY] = 'O';
        }
    }
}
