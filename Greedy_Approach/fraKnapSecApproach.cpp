#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

bool compare(pair<double,int> p1 , pair<double,int> p2){
    return p1.first > p2.first;
}

double fracKnapSackUsingPair(vector<int> value , vector<int> weight , int W){
    int n = value.size();

    vector<pair<double,int>> ratio(n,make_pair(0.0,0));

    for(int i=0 ; i<n ; i++){
        double r = value[i]/weight[i];
        ratio[i] = make_pair(r,i);
    }

    //Sorting the array in descending order....

    sort(ratio.begin()  , ratio.end() ,compare);

    //main logic..
    int ans = 0;
    for(int i=0; i<n ; i++){
        int idx = ratio[i].second;

        if(weight[idx] <= W){
            ans += value[idx];
            W -= weight[idx];
        }else{
            ans += W*ratio[i].first;
            W = 0;
        }
    }
    return ans;
}

int main(){
    vector<int> value = {60,100,120};
    vector<int> weight = {10,20,30};
    int w = 50;

    cout<<"Total value of Knapsack : " << fracKnapSackUsingPair(value,weight,w);

return 0;
}