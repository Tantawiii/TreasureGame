#pragma once
#include <iostream>

bool isValidMove(char grid[10][10], int tempX, int tempY) {
    if(tempX <= 10 || tempY <= 10){
        if (grid[tempX][tempY] == '.') {
            return false;
        }
        if (grid[tempX][tempY] == ' ') {
            return true;
        }
    }
}
