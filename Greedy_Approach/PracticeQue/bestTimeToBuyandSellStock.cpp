#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void MaxProfit(vector<int> v){
    int n = v.size();
    vector<int> bestBuy;
    bestBuy.push_back(INT_MAX);
    for(int i=1 ; i<n ; i++){
        bestBuy[i] = min(bestBuy[i-1] , v[i-1]);
    }

    int maxProfit = INT_MIN;

    for(int i=0 ; i<n ; i++){
        int currentSum = v[i]-bestBuy[i];
        maxProfit = max(currentSum,maxProfit);
    }

 cout<<maxProfit<<" ";
   
}

int main(){
    vector<int> stock = {7,1,5,3,6,4};
    MaxProfit(stock);



return 0;
}