#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int data){
        this->data = data;
        right = left = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void helper(Node* root , int k , int currLevel){
    if(root == NULL){
        return;
    }

    if(currLevel == k){
        cout<<root->data<<" ";
        return;
    }

    helper(root->left , k , currLevel+1);
    helper(root->right , k , currLevel+1);

}

void kthLevel(Node* root , int k){
     helper(root , k , 1);
}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    // perOrderTraversal(root);
    // InOrderTraversal(root);
    // postOrderTraversal(root);

    kthLevel(root,2);


return 0;
}