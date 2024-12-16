#include<iostream>
using namespace std;

void reverse(int arr[] , int size){
    int s =0 , e = size-1;

    while(s<=e){
        // swap(arr[s],arr[e]);
        // s++ , e--;

        int temp = arr[s];
        arr[s] = arr[e];
        arr[e]=arr[temp];
        s++ , e--;
    }
    for(int i=0  ; i<size ; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    reverse(arr,size);

    // int copyarr[size];

    // for(int i=0 ; i<size ; i++){
    //     int j=size-i-1;
    //         copyarr[i]=arr[j];
    // }

    // for(int i=0  ; i<size ; i++){
    //     arr[i]=copyarr[i];
    // }

    // for(int i=0 ; i<size ; i++){
    //     cout<<arr[i]<<"  ";
    // }cout<<endl;

    return 0;
}