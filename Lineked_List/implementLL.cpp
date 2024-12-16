#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }


    ~Node(){
        cout<<"Node Destructor called.."<<data<<endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List
{   

public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    ~List()
    {  
        // cout<<"List destructor called...";
       if(head!=NULL){
        delete head;
        head = NULL;        
       }
    }



    // Inset Node in LInked LIst Middle...

    // void insertNode(int val, int pos)
    // {
    //     Node *newNode = new Node(val);
    //     Node* temp = head;
    //     for(int i=0 ; i<pos-1 ; i++){
    //         temp = temp->next;              //temp is now at pos-1.
    //     }

    //     newNode->next = temp->next;
    //     temp->next = newNode;

        
    // }



    //Pop_front means Remove first element in an Linked List

    // void pop_front(){
    //     Node* temp = head;
    //     head = head->next;
    //     temp->next = NULL;
    //     delete temp;
    // }

    // void pop_back(){
    //     if(head == NULL){
    //         cout<<"LL is empty";
    //         return;
    //     }

    //     if(head->next == NULL){
    //         delete head;
    //         head = NULL;
    //         return;
    //     }
    //     Node* temp = head;

    //     while(temp->next->next != NULL){
    //         temp = temp->next;
    //     }
    //     temp->next = NULL;
    //     delete tail;
    //     tail = temp;

    // }

    // int interativeSearch(int key){
    //     Node* temp = head;
    //     int index = 0;
    //     while(temp != NULL){
    //         if(temp->data == key){
    //            return index;

    //         }
    //         temp = temp->next;
    //         index++;

    //     }

    //     return -1;

    // }



    //Recursive Search in Linked List...


    // int helper(Node* head , int key){

    //     if(head == NULL){
    //         return -1;
    //     }
    
    //     if(head->data == key){
    //         return 0;
    //     }


    //     int idx = helper(head->next , key);
    //     if(idx==-1){
    //         return -1;
    //     }
    //     return idx+1;
    // }

    // int searchRecurive(int key){
    //     return helper(head , key);
    // }


    // int rescursiveSearch(int key){
    //     return recursiveHelper(head , key);
    // }

    // int recursiveHelper(Node* temp , int key){
    //     // Node* temp = head;

    //     //Base Case...
    //     if(temp = NULL){
    //         return -1;
    //     } 

    //     if(temp->data == key){
    //         return 0;
    //     }


    //     int ans = recursiveHelper(temp->next , key);

    //     if(ans == -1){
    //         return -1;
    //     }


    //         return ans+1;
    

    // }
    
    //     // int idx= recursiveSearch(temp->next , key);







//Reverse Linked List .......

// void reverse(){
//     Node* curr = head;
//     Node* prev = NULL;

//     while(curr != NULL){
//         Node* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }

//     head = prev;
// }



//Find & REmove nth Node from End ...

// int sizell(){
//     Node* temp = head;
//     int idx = 0;
//     while(temp != NULL){
//         temp = temp->next;
//         idx++;
//     }

//     return idx;
// }

// void remove(int n){
//     Node* pre = head;
//     int size = sizell();
//     for(int i=0 ; i<(size-n) ; i++){
//         pre = pre->next;
//     }

//     Node* toDlt = pre->next;
//     cout<<"Going to dlt : "<<toDlt->data;

//     pre->next = pre->next->next;
//     delete toDlt;
// }

/*

Linked List Part-2 starting here.....


*/
    // bool isCycle(){
    //     Node* slow = head;
    //     Node* fast = head;

    //     while(fast != NULL && fast->next != NULL){
    //         slow = slow->next;
    //         fast = fast->next->next;

    //         if(slow == fast){
    //             cout<<"Cycle/Loop is found in Linked-List";
    //             return true;        //break bhi likh skte teh.....
    //         }
    //     }
    //     cout<<"Cyclone does'nt found";
    //     return false;
        
    // }

    // Node* splitAtMid(Node* head){
    //     Node* slow = head;
    //     Node* fast = head;
    //     Node* prev = NULL;

    //     while(fast != NULL && fast->next != NULL){
    //         prev = slow;
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }

    //     if(prev != NULL){
    //         prev->next = NULL;
    //     }
    //     return slow;
    // }


    //  Node* merge(Node* left  , Node* right){
    //     List ans;
    //     Node* i = left ; 
    //     Node* j = right ;

    //     while(i != NULL && j != NULL){
    //         if(i->data <= j->data){
    //             ans.push_back(i->data);
    //             i = i->next;
    //         }else{
    //             ans.push_back(j->data);
    //              j = j->next;
    //         }
    //     }

    //     while(i != NULL){
    //         ans.push_back(i->data);
    //         i = i->next;
    //     }

    //      while(j != NULL){
    //         ans.push_back(j->data);
    //         j = j->next;
    //     }

    //     return ans.head;
    //  }    

    // //Merge Sort in LL...
    // Node* mergeSort(Node* head){

    //     if(head == NULL || head->next == NULL){
    //         return head;
    //     }
    //     Node* rightHead = splitAtMid(head);

    //     Node* left = mergeSort(head);
    //     Node* right = mergeSort(rightHead);

    // return merge(left , right);
    // }
};

    //Second try code of merge Sort

    Node* splitAtMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL){
            prev->next = NULL;
        }
        return slow;


    }


    Node* merge(Node* left , Node* right){
        List ans;
        Node* i = left  ;
        Node* j = right ;

        while(i != NULL && j!=NULL){
             if(i->data <= j->data){
                ans.push_back(i->data);
                i=i->next;
             }else{
                ans.push_back(j->data);
                j=j->next;
             }
        }

        while(i != NULL){
            ans.push_back(i->data);
                i=i->next;
        }

        while(j != NULL){
            ans.push_back(j->data);
                j=j->next;
        }
        return ans.head;
    }

    Node* mergeSort(Node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        Node* rightHead = splitAtMid(head);
        Node* right = mergeSort(rightHead);
        Node* left = mergeSort(head);

        return merge(left , right);

    }

    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;

        }
        return prev;
    }

 


    Node* zigzag(Node* head){
        Node* rightHead = splitAtMid(head);
        Node* rightHeadRev = reverse(rightHead);



    //Alternation Merging in Zig-Zag LL
        Node* left = head;
        Node* right = rightHeadRev;
        Node* tail = head;
        Node* nextLeft = NULL;
        Node* nextRight = NULL;


        while(left != NULL && right != NULL){
            nextLeft = left->next;
            nextRight = right->next;

            left->next = right;
            right->next = nextLeft;

            tail = right;

            left = nextLeft;
            right = nextRight;
        }

        if(right != NULL){
            tail->next = right;
        }

        return head;

    }
    
    



// int main()
// {
//     List ll;
//     // ll.push_front(3);
//     // ll.push_front(2);
//     // ll.push_front(1);

//     // ll.printList();

//     // ll.push_back(4);
//     // ll.push_back(5);

//     // ll.printList();

//     // ll.insertNode(100,2);


//     // ll.printList();


//     // ll.pop_front();

//     // ll.printList();

//     // ll.pop_front();

//     // ll.printList();

//     // ll.pop_back();
//     // ll.printList();

//     //cout<< ll.interativeSearch(20);
//     // cout<<ll.searchRecurive(100);

//     // ll.reverse();
//     // ll.printList();

//     // ll.remove(2);

//     // ll.push_front(34);
//     // ll.push_front(32);
//     // ll.push_front(33);
//     // ll.push_front(44);
//     // // ll.tail->next = ll.head;
//     // ll.isCycle();

//      // Add elements to the list
//     // ll.push_back(3);
//     // ll.push_back(1);
//     // ll.push_back(4);
//     // ll.push_back(2);
//     // ll.push_back(5);
    
//     // cout << "Original List: ";
//     // ll.printList();

//     // Sort the list using mergeSort
//       // QS : Merge Sort the Linked List
//         ll.push_front(1);
//         ll.push_front(2);
//         ll.push_front(3);
//         ll.push_front(4);
//         ll.printList();

//         ll.head = mergeSort(ll.head);
//         ll.printList();
// }



int main(){
       List ll;

       //QS : Cycle Detection & Removal
       /* ll.push_front(4);
       ll.push_front(3);
       ll.push_front(2);
       ll.push_front(1);

       ll.tail->next = ll.head; //creating a cycle

        cout << isCycle(ll.head) << endl;
        removeCycle(ll.head);
        cout << isCycle(ll.head) << endl;
        ll.printList(); */

        // QS : Merge Sort the Linked List
        // ll.push_front(1);
        // ll.push_front(2);
        // ll.push_front(3);
        // ll.push_front(4);
        // ll.printList();

        // //  ll.head = mergeSort(ll.head);
        // ll.head = zigZag(ll.head);
        // // ll.head = reverse(ll.head);
        // ll.printList();



   //QS : Zig Zag Linked List
        ll.push_front(5);
        ll.push_front(4);
        ll.push_front(3);
        ll.push_front(2);
        ll.push_front(1);
        ll.printList();

        ll.head = zigzag(ll.head);
        ll.printList();
}



