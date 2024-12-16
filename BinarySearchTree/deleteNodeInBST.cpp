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
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(root->data > val){
        root->left =  insert(root->left , val);
    }else{
        root->right = insert(root->right , val);
    }

    return root;
}

Node* buildBST(int arr[] , int n){
    Node* root = NULL;

    for(int i=0 ; i<n ; i++){
        root = insert(root , arr[i]);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* getInorderSuccessor(Node*root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root , int val){
    //Base case..

    if(root == NULL){
        return NULL;
    }

    if(val < root->data){
        root->left = delNode(root->left , val);
    }else if(val>root->data){
        root->right = delNode(root->right , val);
    }else{
        //root->data == val
        //Case1 : 0 Node;

        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //Case2 : 1 Node

        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }

        //Case3 : 2 Node
        Node* IS = getInorderSuccessor(root->left);
        root->data = IS->data;
        root->right = delNode(root->right , IS->data);
        return root;

    }
return root;  // return root kuch bhi likh skte h kiuki ye line kabi execute nhi hogi.......,.........

}

int main(){
    
    int arr[] = {1,5,2,3,4};
    Node* root = buildBST(arr , 5);
    // cout<<root->data<<endl;
    inorder(root);
    cout<<endl;
    delNode(root , 2);
    inorder(root);
    cout<<endl;

return 0;
}