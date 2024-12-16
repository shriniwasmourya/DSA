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
    Node* prev;

    Node(int val){
        data = val;
        prev = next = NULL;
    }
};


class Dbll{
    public:
    Node* head;
    Node* tail ; 

    Dbll(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head ; 
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            
            tail = newNode;
        }

    }

    //complete push_back & POP_back in doubly Linked-List...


    //Pop front in Doubly Linked List
    void pop_front(){
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head->prev = NULL;
    }

    temp->next = NULL;
    delete temp;

    }

    void printList(){
        Node* temp = head ; 

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }cout<<"NULL\n";
    }
};

int main(){
    Dbll ll;
    dbll lll;
    
    ll.push_back(4);
    ll.push_back(1);
    ll.push_back(8);
    ll.push_back(4);
    ll.push_back(5);

    ll.push_back(4);
    ll.push_back(1);
    ll.push_back(8);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();

    

return 0;
}