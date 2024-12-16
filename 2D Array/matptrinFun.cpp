#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void printArrayUsingPtr(int (*arr)[4] , int n , int m){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<"  ";
        }
    }cout<<endl;
}


void printArrayUsingSimple(int arr[][4] , int n , int m){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<"  ";
        }
    }cout<<endl;
}


int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};


    printArrayUsingPtr(arr , 4 , 4);
    printArrayUsingSimple(arr , 4, 4);

return 0;
}