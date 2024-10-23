#pragma once
#include <iostream>

bool isValidMove(char grid[10][10], int &tempX, int &tempY) {
    int tempXs = tempX, tempYs = tempY;
    if (grid[tempX][tempY] == '.') {
        std::cout << "Collision detected: Wall!" << std::endl;
        return false;
    }
    if (grid[tempX][tempY] == ' ') {
        grid[tempXs][tempY] = ' ';
        tempXs = tempX;
        tempYs = tempY;
        grid[tempX][tempY] = 'O';
    }
}
