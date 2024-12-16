#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;

void printBoard(vector<vector<char>> board)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j]<<" ";
        }
        
        cout<<endl;
    }
    // cout<<".............";
}

bool isSafe(vector<vector<char>> board , int row , int col){
    int n = board.size();
    //Vertical Check..
    for(int i=0 ; i<n ; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }


    //Horizontal Check..
     for(int i=0 ; i<n ; i++){
        if(board[row][i] == 'Q'){
            return false;
        }
    }

    //Diagonal Left..

     for(int i=row , j = col  ; i>=0 && j>=0 ; i-- , j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }


    //Diagonal Right..

     for(int i=row , j = col  ; i>=0 && j<n ; i-- , j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}


int nQueens(vector<vector<char>> board , int row){
    int n = board.size();
    bool print = false;
    if(row==n){  
        return true;      
    }
    int count  = 0;
    for(int i=0 ; i<n ; i++){
        if(isSafe(board , row , i)){
        board[row][i] = 'Q';
       count += nQueens(board , row+1);
       if(count==1){
        printBoard(board);
        break;
       }
        board[row][i] = '.';
        }
    }

    return count;
}

int main()
{
    vector<vector<char>> board;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }

        board.push_back(newRow);
        
    }

    int count = nQueens(board , 0);
    cout<<"Total Count : "<<count<<endl;
    

    return 0;
}