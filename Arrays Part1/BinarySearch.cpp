#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> v , int n,int key){
    int s = 0 ;
    int e = n-1;
    int mid;

    while(s<=e){
        mid = s+(e-s)/2;

        if(v[mid]==key){
            return mid;
        }else if(key>v[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }return -1;
}

int main(){
    vector<int> v = {2,4,6,8};
    int n = v.size();
    int key;
    cout<<"Enter the key :";
    cin>>key;

    int result = binarySearch(v,n , key);
    if(result>=0){
    cout<<"Key Found at Index :"<<result<<endl;
    }else{
        cout<<"Key Not found...";
    }

    return 0;
}