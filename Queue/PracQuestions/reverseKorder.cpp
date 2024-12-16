#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void reverseKorder(queue<int> &q , int k){
    stack<int> s;
    for(int i=0 ; i<k ; i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    int remaining = q.size()-k;

    for(int i=0 ; i<remaining ; i++){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    for(int i=1 ; i<=5 ; i++){
        q.push(i);
    }

    // reverseKorder(q,2);

    for(int i=1 ; i<=5 ; i++){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;


return 0;
}