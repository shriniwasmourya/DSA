#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;


void printSudoku(vector<vector<int>>&sudoku){
    for(int i=0  ; i<9 ; i++){
        for(int j=0 ; j<9  ; j++){
            cout<<sudoku[i][j]<<"  ";
        }cout<<endl;
    }
}

bool isSafe(vector<vector<int>>&sudoku, int row, int col, int digit)
{

    // Vertical check

    for (int i = 0; i <= 8; i++)
    {
        if (sudoku[i][col] == digit)
        {
            return false;
        }
    }

    // Horizontal check

    for (int i = 0; i <= 8; i++)
    {
        if (sudoku[row][i] == digit)
        {
            return false;
        }
    }

    // Grid check 3x3
    // To calcuate sRow , sCol , we find uisng the mathemical formula
    /*

    Row , Col -> 3x3;
    startRow = (row/3)*3
    startCol = (col / 3)*3

    */
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int i = startRow; i <= startRow + 2; i++)
    {
        for (int j = startCol; j <= startCol + 2; j++)
        {
            if (sudoku[i][j] == digit)
            {
                return false;
            }
            sudoku[row][col] = 0;
        }
    }
    return true;
}

bool sudokuSolver(vector<vector<int>> sudoku, int row, int col)
{

    //Base Case
    if(row == 9){
        printSudoku(sudoku);
        return true;
    }
    int nextRow = row;
    int nextCol = col + 1;

    if (nextCol == 9)
    {
        nextRow = row + 1;
        nextCol = 0;
    }

    // Digit check if placed..

    if (sudoku[row][col] != 0)
    {
        return sudokuSolver(sudoku, nextRow, nextCol);
    }

    for (int digit = 1; digit <= 9; digit++)
    {
        if (isSafe(sudoku, row, col, digit))
        {
            sudoku[row][col] = digit;
            if (sudokuSolver(sudoku, nextRow, nextCol))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    // Define a 9x9 Sudoku grid using a 2D vector
    vector<vector<int>> sudoku = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

        sudokuSolver(sudoku , 0 , 0);

    return 0;
}