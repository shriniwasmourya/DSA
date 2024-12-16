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

//Search in BST code start here...

bool Search(Node* root , int key){
    //Base case..
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(root->data >key){
        return Search(root->left , key);
    }else{
        return Search(root->right , key);
    }
}


int main(){
    int arr[] = {5,1,3,4,2,7};
    Node* root = buildBST(arr,6);
    cout<<root->data<<endl;
    inorder(root);
    cout<<endl;

    cout<<Search(root,8);

    inOrderSuccessor(root , 5);


return 0;
}