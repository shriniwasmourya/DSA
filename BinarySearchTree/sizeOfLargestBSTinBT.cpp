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
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root , int val){
    //Base case..
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val <root->data){
        root->left = insert(root->left , val);
    }else{
        root->right = insert(root->right , val);
    }
    return root;
}

Node* buildBST(int arr[] , int n){       //o(logn)
    Node* root = NULL;

    for(int i=0 ; i<n ; i++){
        root = insert(root , arr[i]);
    }

    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

class Info{
    public:
    bool isBST;
    int min;
    int max;
    int size;

    Info(bool isBST , int min , int max , int size){
        this->isBST = isBST;
        this->min  = min;
        this->max = max;
        this->size = size;
    }
};

static int MaxSize;

Info* largestBST(Node* root){
    //Base case..1
    if(root == NULL){
        return new Info(true , INT_MAX , INT_MIN , 0);
    }

    //Base case..2
    // if(root == NULL){
    //     return NULL;
    // }

    // if(root->left == NULL && root->right==NULL){
    //     return new Info(true , root->data , root->data , 1);
    // }

    //Left and Right Information..
    Info* leftInfo = largestBST(root->left);
    Info* rightInfo = largestBST(root->right);

    //Min , max , Size , IsBST = true/false calculate..

    int currMin = min(root->data , min(leftInfo->min , rightInfo->min));
    int currMax = max(root->data , max(leftInfo->max , rightInfo->max));
    int currSize = leftInfo->size + rightInfo->size + 1;

    //isBST calculate..
    if(leftInfo->isBST && rightInfo->isBST &&
        root->data > leftInfo->max &&
        root->data < leftInfo->min){
        MaxSize = max(MaxSize , currSize);
        return new Info(true , currMin , currMax , currSize);
        }

    return new Info(false , currMin , currMax , currSize);

}

int main(){
    int arr[] = {50,30,5,20,60,45,70,65,80};
    Node* root = buildBST(arr,6);
    cout<<root->data<<endl;
    inorder(root);
    cout<<endl;
    
    largestBST(root);
    cout<<"Max size of an largest BST : " << MaxSize<<endl;


return 0;
} c                                        c