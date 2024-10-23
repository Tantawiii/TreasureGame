#pragma once
#include <iostream>

bool isValidMove(char grid[10][10], int tempX, int tempY, bool& gameOver) {
    if (tempX < 0 || tempX >= 10 || tempY < 0 || tempY >= 10) {
        return false;
    }
    if (grid[tempX][tempY] == '.') {
        return false;
    }
    if (grid[tempX][tempY] == 'X') {
        cout << "You Win!\n";
        gameOver = true;
    }
    return grid[tempX][tempY] == ' ';
}
