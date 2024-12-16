#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

class Queue{
    deque<int> dq;

    public:

    void push(int data){
        dq.push_back(data);
    }

    void pop(){
        dq.pop_front();
    }

    int front(){
        return dq.front();
    }

    bool isEmpty(){
        return dq.empty();
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;


return 0;
}