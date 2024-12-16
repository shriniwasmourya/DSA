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

void inorder(Node* root , vector<int> &asc){
    if(root==NULL){
        return;
    }

    inorder(root->left , asc);
    asc.push_back(root->data);
    cout<<root->data<<" ";
    inorder(root->right,asc);
}

Node* buildBSTFromSortedArray(vector<int> asc , int s , int e){
    //Base case..
    if(s>e){
        return NULL;
    }

    int mid = s+(e-s)/2;
    Node* currNode = new Node(asc[mid]);

    currNode->left = buildBSTFromSortedArray(asc , s , mid-1);
    currNode->right = buildBSTFromSortedArray(asc , mid+1 , e);

    return currNode;
}

void preorder(Node* root){
    //Base case..
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int arr[] = {5,1,3,4,2,7};
    vector<int> asc;
    Node* root = buildBST(arr,6);
    cout<<root->data<<endl;
    inorder(root , asc);
    cout<<endl;

    for(auto i : asc){
        cout<<i<<" ";
    }cout<<endl;

Node* sRoot = buildBSTFromSortedArray(asc , 0 , 5);
preorder(sRoot);

return 0;
}