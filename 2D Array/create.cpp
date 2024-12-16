#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;




int main(){
    // int students[2][3] = {{50 , 55 , 60 }, 
    //                       {90 , 95 , 100}};
    // int size = sizeof(students)/sizeof(int);
    // cout<<size;
    int n , m;
    cout<<"Enter the size of row :";
    cin>>n;
    cout<<"Enter the size of col :";
    cin>>m;
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }cout<<endl;
    }


    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    

return 0;
}