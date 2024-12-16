#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
             
        }
    }


    void printList(){
        Node* temp = head;
          while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<"NULL";
    }

    void pop(){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    bool empty(){
        return head == NULL;
    }

    int top(){
        return head->data;
    }



};


bool palindromeString(List &l){
stack<int> s;
    Node* temp = l.head;
    while(temp != NULL){
        s.push(temp->data);
        temp = temp->next;
    }

    temp = l.head;

    while(!s.empty()){
        if(s.top() != temp->data){
            return false;
        }
        s.pop();
        temp = temp->next;
    }
    return true;
}
int main(){
    // list<int> l = {1,2,2,1};
    List l;
    l.push(1);
    l.push(2);
    l.push(2);
    l.push(5);
    // l.printList();
  
    cout<<palindromeString(l);




return 0;
}