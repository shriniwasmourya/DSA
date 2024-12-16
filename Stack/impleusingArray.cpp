#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

class Stack{
   
    int arr[100];
    int topidx;

    public:
    Stack(){
        
        topidx = -1;
    }


    //Push element at the rear side

    void push(int val){
        if(topidx <=99){
            topidx++;
            arr[topidx] = val;
        }else{
            cout<<"Stack is full\n";
        }
    }


    //Pop from the stack in front side..

    void pop(){
        if(topidx == -1){
            cout<<"Stack is Empty"<<endl;
        }else if(topidx >=0){
            topidx--;
        }
    }


    //print Stack using array 

    void printStack(){
        for(int i=0 ; i<=topidx ; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    //Top element of stack

    int top(){
        if(topidx == -1){
            cout<<"Stack is Empty";
        }
        return topidx;
    }
};


int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.printStack();
    s.pop();
    s.pop();
    s.printStack();

return 0;
}