#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    vector<int> v = {2,-3,6,-5};
    int n = v.size();
    int currentSum = 0 ;
    int maxSum = INT_MIN;
    for(int i=0 ;i<n ; i++){
       currentSum += v[i];
       if(currentSum<0){
        currentSum = 0;
       }
       maxSum = max(maxSum , currentSum);

    }
    cout<<maxSum;

    return 0;
}

