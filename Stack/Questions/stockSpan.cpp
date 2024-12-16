#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void stockSpan(vector<int> arr,vector<int> &span){
    stack<int> s;
    
    span[0] = 1;
    s.push(0);


    for(int i=1 ;i<arr.size() ; i++){
            int currentPrice = arr[i];
        while(!s.empty() && currentPrice >= arr[s.top()]){
            s.pop();
        }

        if(s.empty()){
            span[i] = i+1;
        
        }else{
            int prevHigh = s.top();
            span[i] = i-prevHigh;
        }
        s.push(i);
    }


    for(int i=0 ;i<span.size() ; i++){
        cout<<span[i]<<" ";
    }cout<<endl;
}

int main(){
    vector<int> arr = {100,80,60,70,60,85,100};
    vector<int> span = {0,0,0,0,0,0,0,};
    stockSpan(arr,span);


return 0;
}