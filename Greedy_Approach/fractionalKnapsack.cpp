#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void fracKnapSack(vector<int> value , vector<int> weight , int W){
    vector<int> ratio(value.size(),0);
    int ans = 0; 

    for(int i=0 ; i<value.size() ; i++){
        ratio[i] = value[i]/weight[i];
    }

   
    for(int i=0 ; i<value.size() ; i++){
        if(weight[i] <= W){
            ans += value[i];
            W -= weight[i];
        }else{
            ans += ratio[i]*W;
            W = 0;
            break;
        }
    }

    cout<<"Total capacity of Knapsack : "<<ans<<endl;
}

int main(){
    vector<int> value = {60,100,120};
    vector<int> weight = {10,20,30};
    int w = 50;

    fracKnapSack(value,weight,w);



return 0;
}