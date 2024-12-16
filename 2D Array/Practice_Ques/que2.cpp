#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void sum(int arr[4][4]){
    int sum =0 ;
    int n = 3; 
    int m = 3;

    for (int i=0 ; i<=n ; i++){
        sum += arr[1][i];
    }
    cout<<sum<<endl;
}


int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    sum(arr);
return 0;
}