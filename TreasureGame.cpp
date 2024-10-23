#include "getGrid.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "collision.h"
#include "movement.h"

using namespace std;

const int gridSize = 10;
char border[gridSize][gridSize];

void initializeGrid() {
    getGrid("grid.txt", border);
}

int main() {

    srand(time(0));
    
    initializeGrid();
    
    int playerX = rand() % (gridSize - 2) + 1;
    int playerY = rand() % (gridSize - 2) + 1;
    while (border[playerX][playerY] == '.') {
        playerX = rand() % (gridSize - 2) + 1;
        playerY = rand() % (gridSize - 2) + 1;
    }
    border[playerX][playerY] = 'O';

    int targetX = rand() % (gridSize - 2) + 1;
    int targetY = rand() % (gridSize - 2) + 1;
    while ((targetX == playerX && targetY == playerY) || border[targetX][targetY] == '.') {
        targetX = rand() % (gridSize - 2) + 1;
        targetY = rand() % (gridSize - 2) + 1;
    }
    border[targetX][targetY] = 'X';

    bool gameOver = false;

    while (!gameOver) {
        system("cls");
        for (int i = 0; i < gridSize; i++) {
            for (int j = 0; j < gridSize; j++) {
                cout << border[i][j] << ' ';
            }
            cout << endl;
        }
        handleMovement(border, playerX, playerY,gameOver);

    }

    return 0;
}
