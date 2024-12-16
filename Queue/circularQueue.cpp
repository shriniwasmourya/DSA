#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;


class Queue{
    int  *arr;
    int capacity;
    int totalSize;
    int r , f;

    public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        r = -1;
        f = 0;
    }

    void push(int data){
        if(totalSize == capacity){
            cout<<"Queue is Full\n";
            return;
        }

        r = (r+1)%capacity;
        arr[r] = data;
        totalSize++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
            return;
        }

        cout<<"Popped element from Queue : "<<arr[f]<<endl;
        f = (f+1)%capacity;
        totalSize--;
    }

    void front(){
          if(isEmpty()){
            cout<<"Queue is Empty\n";
            return;
        }

        cout<<"First element : "<<arr[f]<<endl;
    }

     void rear(){
        cout<<"Last element : "<<arr[r]<<endl;
    }

    bool isEmpty(){
        return totalSize == 0;
    }

};


int main(){
    Queue q(3);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.front();
    q.pop();
    q.front();
    q.push(8);
    q.front();  
    q.rear();

return 0;
}