#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
           for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }

        result.push_back(newRow);
        
    }
        nQueens(board, 0, result);
        return result;
    }

private:
    void printQueen(vector<vector<char>> board, vector<vector<string>>& result) {
        int n = board.size();
        vector<string> queenBoard;
        for (int i = 0; i < n; i++) {
            string row;
            for (int j = 0; j < n; j++) {
                row += board[i][j];
            }
            queenBoard.push_back(row);
        }
        result.push_back(queenBoard);
    }

    bool isSafe(vector<vector<char>> board, int row, int col) {
        int n = board.size();
        // Horizontal check
        for (int i = 0; i < n; i++) {
            if (board[row][i] == 'Q') {
                return false;
            }
        }

        // Vertical check
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Diagonal upper-left
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Diagonal upper-right
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Diagonal lower-left
        for (int i = row + 1, j = col - 1; i < n && j >= 0; i++, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Diagonal lower-right
        for (int i = row + 1, j = col + 1; i < n && j < n; i++, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nQueens(vector<vector<char>>& board, int row, vector<vector<string>>& result) {
        int n = board.size();
        if (row == n) {
            printQueen(board, result);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (isSafe(board, row, i)) {
                board[row][i] = 'Q';
                nQueens(board, row + 1, result);
                board[row][i] = '.';  // Backtracking..
            }
        }
    }
};


int main(){
    

return 0;
}