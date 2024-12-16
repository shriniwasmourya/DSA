#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Stack{
    public:
    Node* head ; 
    Node* tail ; 

    Stack(){
        head = tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Linked Stack is Empty";
            return ;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }


        Node* temp = head;

        while(head->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void top(){
        Node* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }
        cout<<"Top element of stack : "<<temp->data<<" "<<endl;
    }

    void printStack(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }cout<<"NULL\n";
    }
};




int main(){
    Stack s;
    s.push_back(1);
    s.push_back(2);
    s.pop_back();
    s.printStack();
    s.top();
    


return 0;
}