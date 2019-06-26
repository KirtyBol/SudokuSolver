//
//  main.cpp
//  Sudoku
//
//  Created by Kirty Bol on 13/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//

#include "Sudoku.hpp"
#include "Grid.hpp"
#include "Solve.hpp"
#include "Checks.hpp"

#include <iostream>

using std::cout;
using std::endl;

#define DIM 9

int main()
{
    int grid[DIM][DIM] = {
        { 6, 0, 0, 0, 2, 0, 8, 0, 3 },
        { 0, 3, 0, 0, 9, 4, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 9, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 5 },
        { 0, 0, 8, 0, 0, 0, 0, 6, 9 },
        { 7, 5, 0, 0, 0, 0, 2, 4, 0 },
        { 0, 0, 2, 0, 3, 0, 0, 0, 1 },
        { 0, 0, 4, 6, 5, 0, 0, 8, 0 },
        { 1, 8, 5, 2, 4, 0, 0, 3, 6 } };
    
    /*int grid[DIM][DIM] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 } }; */
    //solveSudoku(puzzle, 0, 0);
    //printSudoku(puzzle);
    
    // Print the grid of the sudoku before it is solved
    print_grid(grid);
    
    //checking if the given sudoku is solvable or not
    if (true == solve_sudoku(grid))
    {
        print_grid(grid);
    }
    else
    {
        cout << "No solution exists for the given Sudoku..." << endl << endl;
    }
    
    return 0;
}
