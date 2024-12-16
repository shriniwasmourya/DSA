#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0]=77;
}
void func2(int *arr , int n){
    int size = sizeof(arr);
    cout<<size<<endl;
    cout<<"Enter the element of arr using function"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }
}

int main(){
    int arr[] = {1,5,2,4,6,2,1};   //overwrite element when we call the func2....
    
    int n = sizeof(arr)/sizeof(int);

    // cout<<*arr<<endl;    //print first element
    // cout<<*(arr+1)<<endl;  //print second element
    // cout<<*(arr+2)<<endl;  //print third element           *arr+1 = 1+1  = 2....wrong..

    func(arr);
    func2(arr,n);
    
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
    return 0;
}