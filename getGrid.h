#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

void getGrid(const string& path, char grid[10][10])
{
    ifstream myfile(path, ios_base::in);

    if (!myfile.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    string line;
    int row = 0;

    while (getline(myfile, line) && row < 10) {
        for (int col = 0; col < 10; col++) {
            if (line[col] == '0') {
                grid[row][col] = ' ';
            }
            else {
            grid[row][col] = line[col];
            }
        }
        row++;
    }
    
    myfile.close();
}