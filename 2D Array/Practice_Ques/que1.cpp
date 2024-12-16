#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void search7s(int arr[4][4] , int n , int m){
    
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i][j]==7){
                count++;
                // return;
            }
        }
    }
    cout<<"7's Found :"<<count;
}


int main(){
       int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    search7s(arr , 4 , 4);
return 0;
}