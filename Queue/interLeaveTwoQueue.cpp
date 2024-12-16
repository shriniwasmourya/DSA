#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void interLeave2Queue(queue<int> &q){
    queue<int> q1;

    for(int i = 0 ;i<5 ; i++){
        q1.push(q.front());
        q.pop();
    }


    while(!q1.empty()){
        q.push(q1.front());
        q1.pop();
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;

    for(int i=1 ; i<=10 ; i++){
        q.push(i);
    }

    interLeave2Queue(q);

    for(int i=0 ; i<=9 ; i++){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;

return 0;
}