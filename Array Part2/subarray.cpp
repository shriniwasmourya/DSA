#include<iostream>
using namespace std;

void subarray(int arr[] , int n){
    int arraySum = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            // for(int k = 0)
            // cout<<"("<<i<<","<<j<<")  ";
            for(int k=i ; k<=j ; k++){
                cout<<arr[k];
            }
            cout<<", ";
        
        }
    cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    subarray(arr,n);

    return 0;
}