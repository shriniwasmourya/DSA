#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int binarySearch(vector<int> v , int s , int e , int k){
    
    //Base case
    if(s>e){
        return -1;
    }

    int mid = s+(e-s)/2;

    //recursice call

    if(v[mid]==k){
        return mid;
    }

    else if(k>v[mid]){
        return binarySearch(v , mid+1 ,e , k );
    }else{
        return binarySearch(v , s , mid-1 , k);
    }
}


int main(){
    vector<int>v{1,2,3,4,5,6,8};
    int n = v.size();
    int s = 0 ; 
    int e = n-1;


    int r = binarySearch(v , s , e , 4 );
    cout<<"Found : "<<r ;


return 0;
} 