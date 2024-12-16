#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int> v){
    int n = v.size();

    for(int i=0 ; i<n ; i++){
       for (int j = 0; j < n-i-1; j++) {
    v[j] > v[j+1] ? swap(v[j], v[j+1]) : void();
}

    }

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}


int main(){
    vector<int> v = {5,4,1,3,2};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    bubbleSort(v);

return 0;
}