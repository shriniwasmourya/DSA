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


    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx  = -1;
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

int count(Node* root){

//Base Case
        if(root == NULL){
            return 0;
        }


        int leftHeight = count(root->left);
        int rightHeight = count(root->right);

        int currHeight = (leftHeight+rightHeight)+1;
        return currHeight;


}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Node : "<<root->data<<endl;

    cout<<"Total Node in Tree : "<<count(root);

return 0;
}