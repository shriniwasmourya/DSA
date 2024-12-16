#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    int rows , cols;
    cout<<"Enter Row :";
    cin>>rows;
    cout<<"Enter col ;";
    cin>>cols;


    int **mat = new int*[cols];

    for(int i=0 ; i<rows ; i++){
        mat[i]=new int[cols];       //Memory allocate only
    }

    //Data store....
    int x = 1;
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            mat[i][j]=x++;
            cout<<mat[i][j]<<"  ";
        }
    }


return 0;
}