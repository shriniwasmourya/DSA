#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void printSudoku(vector<vector<int>> &sudo){
    int n = sudo.size();
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<sudo[i][j]<<"\t";
        }cout<<"\t"<<endl;
    }
}

bool isSafe(vector<vector<int>> &sudo , int row , int col , int digit){
    //Vertical Check....

    for(int i=0 ; i<9 ; i++){
        if(sudo[row][i] == digit){
            return false;
        }
    }

    //Horizontal check....

    for(int i=0 ; i<9 ; i++){
        if(sudo[i][col] == digit){
            return false;
        }
    }


    //Grid check by using mathematical formula.

    int sr = (row/3)*3;
    int sc = (col/3)*3;

    for(int i = sr ; i<sr+3 ; i++){
        for(int j=sc ; j<sc+3 ; j++){
            if(sudo[i][j]==digit){
                return false;
            }
        }
    }
    return true;

}

bool sudoku(vector<vector<int>> &sudo , int row , int col ){
    //Base case...

    if(row == 9){
        printSudoku(sudo);
        return true;
    }

    int nextRow = row;
    int nextCol = col+1;

    if(nextCol >=9){
        nextRow = row+1;
        nextCol = 0;
    }

    if(sudo[row][col] !=0){
        return sudoku(sudo , nextRow , nextCol);
    }

    //Digit checked if placed...

    for(int digit = 1 ; digit <=9 ; digit++){
        if(isSafe(sudo , row , col , digit)){
            sudo[row][col] = digit;
            if(sudoku(sudo , nextRow , nextCol)){
                return true;
            }
            sudo[row][col] = 0;
        }
    }
    return false;

}


int main(){
     vector<vector<int>> sudok = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};


        sudoku(sudok , 0 , 0);

return 0;
}