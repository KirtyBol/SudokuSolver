//
//  Sudoku.cpp
//  Sudoku
//
//  Created by Kirty Bol on 13/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//

#include "Sudoku.hpp"
#include <iostream>

int isAvailable(int puzzle[][9], int row, int collumn, int num)
{
    int sqCol = collumn % 3 * 3;
    int sqRow = row % 3 * 3;
    for (int i = 1; i <= 9; ++i)
    {
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][collumn] == num) return 0;
        
        if (puzzle[sqRow + (i % 3)][sqCol + (i / 3)] == num) return 0;
    }
    return 1;
}

int solveSudoku(int puzzle[][9], int row, int collumn)
{
    if (collumn == 9)
    {
        collumn = 0;
        row++;
    }
    if (row == 9) {
        return 1;
    }
    
    if (puzzle[row][collumn] != 0) {
        return solveSudoku(puzzle, row, collumn + 1);
    }
    
    for (int i = 1; i <= 9; ++i)
    {
        if (isAvailable(puzzle, row, collumn, i))
        {
            puzzle[row][collumn] = i;
            if (solveSudoku(puzzle, row, collumn + 1))
                return 1;
        }
    }
    puzzle[row][collumn] = 0;
    return 0;
}

void printSudoku(int puzzle[9][9])
{
    for (int i = 0; i <9; ++i)
    {
        for (int j = 0; j<9; ++j) {
            std::cout << puzzle[i][j] << " ";
        }
        std::cout << "\n";
    }
}
