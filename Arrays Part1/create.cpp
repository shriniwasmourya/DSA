#include<iostream>
using namespace std;


int main(){
    int arr[] = {5,4,9,44,5,};
    int size = sizeof(arr)/sizeof(int);
    int count = arr[0];


    /*Find Largest in an Array...*/
    for(int i=0 ; i<size ; i++){
        if(count>arr[i+1]){
            count=arr[i+1];
            
        }
    }
    cout<<count;



    

    return 0;
}