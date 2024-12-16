#include<iostream>
using namespace std;

void linear(int *arr , int size , int key){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==key){
            cout<<"Key is Found : "<<i<<endl;
        }
    }
            
}

int main(){
    int arr[] = {2,3,1,2,5,6,4,9};
    int size = sizeof(arr)/sizeof(int);

    linear(arr,size , 5);

    return 0;
}