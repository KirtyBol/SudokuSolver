//
//  Solve.cpp
//  Sudoku
//
//  Created by Kirty Bol on 14/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//

#include "Solve.hpp"
#include "Checks.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

// Using macros to make life a bit easier
using std::cout;
using std::endl;

// Some defines to simply life a bit
#define BLANK 0
#define GRID_FULL std::make_pair(9, 9)

// Method to fill and solve the sudoku with the correct numbers
bool solve_sudoku(int grid[DIM][DIM])
{
    // If the Soduko grid has been filled, we are done
    if (GRID_FULL == get_unassigned_location(grid))
    {
        return true;
    }
    
    std::pair<int, int> row_and_column = get_unassigned_location(grid);
    int row = row_and_column.first;
    int col = row_and_column.second;
    
    for (int number = 1; number <= 9; number ++)
    {
        if (is_safe(grid, row, col, number))
        {
            grid[row][col] = number;
            
            if (solve_sudoku(grid))
            {
                return true;
            }
            
            grid[row][col] = BLANK;
        }
    }
    return false;
}
