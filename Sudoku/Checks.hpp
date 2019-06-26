//
//  Checks.hpp
//  Sudoku
//
//  Created by Kirty Bol on 14/06/2019.
//  Copyright © 2019 Kirty Bol. All rights reserved.
//

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

// Using macros to make life a bit easier
using std::cout;
using std::endl;

// The basic define
#define DIM 9

// The methods that are being used
bool used_in_row(int grid[DIM][DIM], int row, int number);
bool used_in_column(int grid[DIM][DIM], int column, int number);
bool used_in_box(int grid[DIM][DIM], int box_start_rpw, int box_start_column, int number);
bool is_safe(int grid[DIM][DIM], int row, int column, int number);
std::pair<int, int> get_unassigned_location(int grid[DIM][DIM]);
