//
//  Grid.cpp
//  Sudoku
//
//  Created by Kirty Bol on 14/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//

// Header file include
#include "Grid.hpp"

// Necessary stuff
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

// Using macros to make life a bit easier
using std::cout;
using std::endl;

// Some defines to simply life a bit
#define DIM 9
#define BLANK 0
#define SPACE " "
#define LINE "│"
#define GRID_FULL std::make_pair(9, 9)

// Method to actually print the sudoku grid
void print_grid(int grid[DIM][DIM])
{
    // Rows
    for (int i = 0; i < DIM; i++)
    {
        if (i == 0)
        {
            cout << endl << "┌───┬───┬───┐ ┌───┬───┬───┐ ┌───┬───┬───┐";
        }
        else if (i == 3 | i == 6)
        {
            
            cout << endl << "└───┴───┴───┘ └───┴───┴───┘ └───┴───┴───┘";
            cout << endl << "┌───┬───┬───┐ ┌───┬───┬───┐ ┌───┬───┬───┐";
        }
        else
        {
            cout << endl << "├───┼───┼───┤ ├───┼───┼───┤ ├───┼───┼───┤";
        }
        
        cout << SPACE << endl;
        
        // Columns
        for (int j = 0; j < DIM; j++)
        {
            
            if( j == 0)
            {
                cout << LINE;
            }
            else if (j == 3 | j == 6)
            {
                cout << SPACE << LINE;
                //cout << "doe dan";
            }
            
            cout << SPACE;
            
            if (BLANK == grid[i][j])
            {
                cout << SPACE;
            }
            else
            {
                cout << grid[i][j];
            }
            cout << SPACE;
            cout << LINE;
        }
    }
    cout << endl << "└───┴───┴───┘ └───┴───┴───┘ └───┴───┴───┘" << endl << endl;;
}
