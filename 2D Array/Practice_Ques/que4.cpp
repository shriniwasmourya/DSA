#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;




int main(){
    int arr[]={1,2,3,4};
    int m = 2 , n=2;
    int mat[m][n];
    int size = sizeof(arr)/sizeof(int);


    for(int i=0 ; i<n ; i++){
        for(int j=n ; j<m ; j++){
            mat[i][j]=arr[n*i+j];
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<mat[i][j]<<"  ";
        }cout<<endl;
    }

return 0;
}