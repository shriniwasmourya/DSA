#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left ; 
    Node* right;


    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int> nodes){
    idx++;
    //Base case..
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void leverOrdertraversal(Node* root){
    queue<Node*> Q;

    //Base Case..
    if(root == NULL){
        cout<<"Root Node is NULL";
        return;
    }

    Q.push(root);

    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();

        cout<<curr->data<<" ";

        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }

    }
}

int transform(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftOld = transform(root->left);
    int rightOld = transform(root->right);
    int currOld = root->data;
    root->data = leftOld+rightOld;
    
    if(root->left != NULL){
        root->data = leftOld+rightOld +root->left->data;
    }
     if(root->right != NULL){
        root->data = leftOld+rightOld+root->right->data;
    }
    
   
    return currOld;

}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    cout<<transform(root);
    leverOrdertraversal(root);


return 0;
}