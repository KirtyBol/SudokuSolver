//
//  Sudoku.hpp
//  Sudoku
//
//  Created by Kirty Bol on 13/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//


#pragma once
#include <stdio.h>
#include <stdlib.h>

int isAvailable(int puzzle[][9], int row, int col, int num);
int solveSudoku(int puzzle[][9], int row, int col);
void printSudoku(int puzzle[9][9]);
