#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int gasStation(vector<int> &gas , vector<int> &cost){
    int totalDiff = 0  , diff =0 , fuel = 0  ,idx = 0;

    for(int i=0 ; i<gas.size() ; i++){
        diff = gas[i] - cost[i];
        fuel += diff;
        totalDiff += diff;

        if(fuel < 0 ){
            idx = i+1;
            fuel = 0;
        }
    }

    return (totalDiff <0) ? -1 : idx;
}

int main(){
    vector<int> gas ={1,2,3,4,5};
    vector<int> cost ={3,4,5,1,2};

    cout<<gasStation(gas,cost);


return 0;
}