#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

class Queue{
    int *arr;
    int r  , f;
    int currentSize;
    int totalSize;

    public:

    Queue(int totalSize){
        this->totalSize = totalSize;
        r = -1;
        f = 0 ;

        arr = new int[totalSize];
        currentSize = 0;

    }
        void enqueue(int data){
            if(currentSize == totalSize){  
                cout<<"Queue is full ";
                return;
            }
            r++;
            arr[r] =  data;
            currentSize++;
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is Empty()";
                return ;
            }
            // cout<<"Popped element from queue"<<arr[f--]<<endl;
            arr[f++];
            currentSize--;
        }

        int front(){
            if(isEmpty()){
                cout<<"Queue is empty ";
                return -1;
            }
            return arr[f];
        }

        bool isEmpty(){
            return currentSize == 0;
        }
    
};

int main(){
    
Queue q(5);
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);

while(!q.isEmpty()){
    cout<<q.front()<<" ";
    q.dequeue();
}cout<<endl;

return 0;
}