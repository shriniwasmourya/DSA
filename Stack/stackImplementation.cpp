#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


// Simple Stack Implementation...
// class stack{
//     vector<int> Stack;

//     public:

//     void push(int val){
//         Stack.push_back(val);
//     }

//     void pop(){
//         Stack.pop_back();
//     }

//     int top(){
//         int lastIdx = Stack.size()-1;
//         return Stack[lastIdx];
//     }


//     bool isEmpty(){
//         return Stack.size() == 0;
//     }


// };


//Stack implementation using template class
template<class T>
class stack{
    vector<T> Stack;

    public:

    void push(T val){
        Stack.push_back(val);
    }

    void pop(){
        Stack.pop_back();
    }

    T top(){
        int lastIdx = Stack.size()-1;
        return Stack[lastIdx];
    }
    bool isEmpty(){
        return Stack.size() == 0;
    }
     void printStack() {
        stack<T> tempStack = *this; // Create a copy to avoid modifying the original stack
        while (!tempStack.isEmpty()) {
            cout << tempStack.top() << " ";
            tempStack.pop();
        }
        cout << endl;
    }


};


int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

     stack<char> s1;
    s1.push('A');
    s1.push('B');
    s1.push('C');

    stack<string> s2;
    s2.push("shriniwas");
    s2.push("Pawan");
    s2.push("Ajay");

    s1.printStack();


return 0;
}