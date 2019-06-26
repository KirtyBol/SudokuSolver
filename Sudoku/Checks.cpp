//
//  Checks.cpp
//  Sudoku
//
//  Created by Kirty Bol on 14/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//

// Header file includes
#include "Checks.hpp"
#include "Solve.hpp"

// Necessary stuff includes
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

// Using macros to make life a little bit easier
using std::cout;
using std::endl;

// Some defines to simply life a bit
#define DIM 9
#define BLANK 0
#define GRID_FULL std::make_pair(9, 9)

// Checks if the given number is already in the row
bool used_in_row(int grid[DIM][DIM], int row, int number)
{
    for (int column = 0; column < DIM; column ++)
        if (grid[row][column] == number)
        {
            return true;
        }
    return false;
}

// Checks if the given number is already in the speific column
bool used_in_column(int grid[DIM][DIM], int column, int number)
{
    for (int row = 0; row < DIM; row++)
        if (grid[row][column] == number)
        {
            return true;
        }
    return false;
}

// Checks if the given number isn't in the specific box of 9 yet
bool used_in_box(int grid[DIM][DIM], int box_start_rpw, int box_start_column, int number)
{
    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column ++)
            if (grid[row + box_start_rpw][column + box_start_column] == number)
            {
                return true;
            }
    return false;
}

// Says if it is safe to put a number in a specific place
bool is_safe(int grid[DIM][DIM], int row, int column, int number)
{
    return !used_in_row(grid, row, number) &&
    !used_in_column(grid, column, number) &&
    !used_in_box(grid, row - row % 3, column - column % 3, number);
}

// Loops throught the cells to fill them
std::pair<int, int> get_unassigned_location(int grid[DIM][DIM])
{
    for (int row = 0; row < DIM; row++)
        for (int column = 0; column < DIM; column ++)
            if (grid[row][column] == BLANK)
            {
                return std::make_pair(row, column);
            }
    return GRID_FULL;
}
