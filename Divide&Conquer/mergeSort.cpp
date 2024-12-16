#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void merge(vector<int>& arr , int s , int e , int mid ){
    vector<int> temp;
    int i=s;             //left
    int j=mid+1;        //right

    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
       temp.push_back(arr[i++]);
 
    }

     while(j<=e){
       temp.push_back(arr[j++]);
 
    }


    //copy temp to arr 
    
    for(int i=s, x = 0 ; i<=e ; i++){
        arr[i]= temp[x++];
    }
}

void mergeSort(vector<int>& arr , int s , int e){
    if(s>=e){
    return;
    }
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);       //Left
    mergeSort(arr,mid+1,e);    //Right

    merge(arr,s,e,mid);
    
}


void printArr(vector<int>& arr , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
}

int main(){
    vector<int> arr = {6,3,7,5,2,4};
    int n = arr.size();
    int s =0 ; 
    int e = n-1;
    mergeSort(arr , s , e);
    printArr(arr,n);

return 0;
}