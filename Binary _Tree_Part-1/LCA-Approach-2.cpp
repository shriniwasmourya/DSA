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

bool rootToNode(Node* root , int n , vector<int> &path){
    //Base Case...
    if(root == NULL){
        return false;
    }

    path.push_back(root->data);
    

    if(root->data == n){
        return true;
    }

    int isLeft = rootToNode(root->left, n , path);
    int isRight = rootToNode(root->right , n , path);

    if(isLeft || isRight){
        return true;
    }

    path.pop_back();
    return false;
}


//Approach 1
int LCA(Node* root , int n1 , int n2){
    vector<int> path1;
    vector<int> path2;

    rootToNode(root , n1 , path1);
    rootToNode(root , n2 , path2);

    int lca=-1;

    for(int i=0 , j=0 ; i<path1.size() , j<path2.size() ; i++ , j++){
        if(path1[i] != path2[j]){
            // return false;
            break;
        }
        lca = path1[i];
    }return lca;
}


//Approach 2 

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



int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    int n1 = 4 , n2 = 5;
    // cout<<LCA(root , n1 , n2)<<endl;
    Node* lca2 = LCA2(root , n1 , n2);
    cout<<lca2->data<<endl;


return 0;
}