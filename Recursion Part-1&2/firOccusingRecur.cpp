#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int func(vector<int> v ,int i, int k){
    int n = v.size();
    if(i==n){
        return -1;
    }
    if(v[n-1]==k){
        // cout<<"First Occurrence : "<<i;
        return i;
    }

    return func(v , i+1 , k);
}


int lastOcc(vector<int> v , int k , int i){
    if(i==v.size()){
        return -1;
    }

    int idxfounnd = lastOcc(v , k , i+1);

    if(idxfounnd == -1 && v[i]==k){
        return i;
    }
    return idxfounnd;
}

int main(){
    vector<int> v = {1,2,3,4,3,5};
    // int res = func(v , 0 , 30);
    // cout<<res<<endl;


    cout<<"Last Occurrence : "<<lastOcc(v , 3 , 0);

return 0;
}