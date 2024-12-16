#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
#include<list>
#include<stack>
#include<queue>
#include<iterator>
using namespace std;

void printStack(stack<int> s){
       while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
       }
}

void pushAtBottom(stack<int> &s , int val){
    
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);

    
}


int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    pushAtBottom(s , 4);
    printStack(s);l 
 
return 0;
}