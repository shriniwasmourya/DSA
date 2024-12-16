#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

bool compare(pair<int , int> p1 , pair<int,int> p2){
    return p1.second < p2.second;
}

void maxLengthChainofPair(vector<pair<int,int>> pairs){
    //first Sort the pair based on second value of pair

    sort(pairs.begin() , pairs.end() , compare);

    int chain = 1;
    int currentEnd = pairs[0].second;

    for(int i=1 ; i<pairs.size() ; i++){

        if(currentEnd <= pairs[i].first){
            chain++;
            currentEnd = pairs[i].second;
        }
    }cout<<chain<<endl;
}

int main(){
    int n = 5;
    vector<pair<int,int>> pairs(n,make_pair(0,0));
    pairs[0] = make_pair(5,24);
    pairs[1] = make_pair(39,60);
    pairs[2] = make_pair(5,28);
    pairs[3] = make_pair(27,40);
    pairs[4] = make_pair(50,90);

    maxLengthChainofPair(pairs);

return 0;
}