#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


void selectionSort(vector<int> v){
    int n = v.size();
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            if(v[i] > v[j]){
                swap(v[i] , v[j]);
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<"  ";
    }cout<<endl;
}

int main(){
    vector<int> v = {5,4,1,3,2};
    selectionSort(v);

return 0;
}