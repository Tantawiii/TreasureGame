#include <iostream>
#include <conio.h>
#include <ctime>
srand(time(0));
int playerX = rand() % (grid - 2) + 1, playerY = rand() % (grid - 2) + 1;
char border[][];
void Movement() {
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
    Collision(border[][],tempX, tempY);
}
void Collision(char border[][],int tempX, int tempY) {
    if (border[tempX][tempY] != 'H') {
        border[playerX][playerY] = ' ';
        playerX = tempX;
        playerY = tempY;
        border[playerX][playerY] = 'O';
    }
}
int main()
{
    std::cout << "Hello World!\n";
}