#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


void maxProfit(vector<int> v , int n){
    vector<int> bestBuy ;
    bestBuy.push_back(INT_MAX);
    for(int i=1 ; i<n ;i++){
        bestBuy[i] = min(bestBuy[i-1],v[i-1]);
    }

   int maxProfit = INT_MIN;
   for(int i=0 ; i<n ; i++){
    int currentSum = v[i]-bestBuy[i]; 
    maxProfit = max(currentSum , maxProfit);
   }
   cout<<maxProfit<<endl;
}

int main(){
    vector<int> v= {7, 1, 5,3, 6, 4};
    int n = v.size();

    maxProfit(v,n);

return 0;
}