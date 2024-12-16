#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void printBoard(vector<vector<char>> board){
    int n = board.size();

    for(int i=0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<board[i][j]<<"  ";
        }cout<<endl;
    }cout<<".............."<<endl;
}


bool isSafe(vector<vector<char>> board , int row , int col){
    int n = board.size();
    //vertical check...
   
   for(int i=0 ; i<n ; i++){
    if(board[i][col]=='Q'){
        return false;
    }
   }


   //Horizontal check...

    for(int i=0 ; i<n ; i++){
    if(board[row][i]=='Q'){
        return false;
    }
   }


    //Diagonal left check...

    for(int i=row , j = col ; i>=0 && j>=0 ; i-- , j--){

        if(board[i][j]=='Q'){
            return false;
        }
    }



     //Diagonal Right check...

    for(int i=row , j = col ; i>=0 && j<n ; i-- , j++){

        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
    

}


int nQueen(vector<vector<char>> &board , int row){
    int n = board.size();
    //Base case
    if(row == n){
        
        
        return true;
    }
    int count = 0;
    for(int col = 0 ; col < n  ; col++){
        if (isSafe(board , row , col )){
        board[row][col] = 'Q';
        count += nQueen(board , row+1);
        if(count == 1){
            printBoard(board);
            break;
        }
        board[row][col] = '.';  //Backtracking...
    }}

    return count;

}



int main(){
    vector<vector<char>> board;
    int n = 4;

    for(int i=0 ; i<n ; i++){
        vector<char> newRow;
        for(int j =0 ; j<n ; j++){
            newRow.push_back('.');
    }
    board.push_back(newRow);
    }

    
    int result = nQueen(board , 0);
    cout<<result;


return 0;
}