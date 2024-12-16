#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

class Stack{
    deque<int> dq;

    public:

    void push(int data){
        dq.push_back(data);

    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty";
            return ;
        }

        dq.pop_back();
    }

    int top(){
        return dq.back();
    }

    bool isEmpty(){
        return dq.empty();
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;


return 0;
}