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


Node* LCA2(Node* root , int n1 , int n2){
    //Base case..

    if(root == NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }

    Node* leftlca = LCA2(root->left , n1 , n2);
    Node* rightlca = LCA2(root->right , n1 , n2);
    

    if(leftlca != NULL && rightlca != NULL){
        return root;
    }

    return leftlca == NULL ? rightlca : leftlca;
}


int dist(Node* root , int n){
    //Base case.
    if(root == NULL){
        return -1;
    }

    if(root->data == n){
        return 0;
    }

    int leftDist = dist(root->left , n);
    if(leftDist != -1){
        return leftDist+1;
    }

     int rightDist = dist(root->right , n);
    if(rightDist != -1){
        return rightDist+1;
    }

    return -1;

    
}


int minDist(Node* root , int n1 , int n2){
    Node* lca = LCA2(root , n2 , n2);

    int dist1 = dist(lca , n1);
    int dist2 = dist(lca , n2);

    return dist1 + dist2;
}


int kthAncestor(Node* root , int node , int k){
    if(root == NULL){
        return -1;
    }

    if(root->data == node){
        return 0;
    }

    int leftDist = kthAncestor(root->left , node , k);
    int rightDist = kthAncestor(root->right , node , k);

    if(leftDist == -1 && rightDist == -1){
        return -1;
    } 

    int isValid = leftDist == -1 ? rightDist : leftDist;
    if(isValid + 1 == k){
        cout<<"Kth Ancestor : "<<root->data<<endl;
    }
    return isValid + 1;
}


int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    int n1 = 4 , n2 = 6;
    // cout<<LCA(root , n1 , n2)<<endl;
    // Node* lca2 = LCA2(root , n1 , n2);
    // cout<<lca2->data<<endl;

    // cout<<"min dist : "<<minDist(root , n1 , n2);

   int  node = 5 , k=1 ; 
    kthAncestor(root , node , k);


return 0;
}