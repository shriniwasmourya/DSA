#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

bool func(int arr[] , int n , int i){
    if(i==n-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }
    return func(arr,n,i+1);
}


int main(){
    int arr[] = {1,2,3,0,5};

    if(func(arr,5,0)){
        cout<<"Array is sorted";
    }else{
        cout<<"Not sorted";
    }

return 0;
}