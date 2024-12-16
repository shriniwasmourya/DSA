#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void indianCoins(vector<int> coins , int value){
    int ans = 0;
    for(int i=coins.size()-1; i>=0 && value>0 ; i--){
        if(value >= coins[i]){
            //kitne coins aa skte h jese 1 ya 2 ya usse jyda
            ans += value/coins[i];

            //kitne rs bache kuch notes dene k baad
            value = value%coins[i];
        }
    }

    cout<<ans<<endl;
}

int main(){
    vector<int> coins = {1,2,5,10,20,50,100,200,500,2000};
    indianCoins(coins,590);


return 0;
}