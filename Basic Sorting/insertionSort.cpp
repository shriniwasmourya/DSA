#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void insertionSort(vector<int> v){
    int n = v.size();

    for(int i=1 ; i<n ; i++){
        int curr = v[i];
        int pre = i-1;

        while(pre >= 0 && v[pre]>curr){
            swap(v[pre] , v[pre+1]);
            pre--;
        }
    }

    for(int i=0 ;i<n; i++){
        cout<<v[i]<<"  ";
    }cout<<endl;
}


int main(){
    vector<int> v={5,4,1,3,2};
    insertionSort(v);

return 0;
}