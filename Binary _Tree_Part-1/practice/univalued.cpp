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

bool univalued(Node* root , int val){
    //Base Case..
    if(root == NULL){
        return true;
    }


    if(root->data != val){
        return false;
    }
    
    return univalued(root->left, val) && univalued(root->right , val);
}

bool isuniValued(Node* root){
    if(root == NULL){
        return true;
    }
    return univalued(root , root->data);
}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    cout<<isuniValued(root);
return 0;
}