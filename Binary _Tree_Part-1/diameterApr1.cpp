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

int height(Node* root){
    //Base Case
    if(root == NULL){
        return 0;
    }


    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int currHeight = max(leftHeight , rightHeight) +1;
    return currHeight;


}


int diameter(Node* root){

    //Base Case...
    if(root == NULL){
        return 0;
    }
    int currDiam = height(root->left) + height(root->right)+1;

    int leftDiam = diameter(root->left);
    int rightDiam = diameter(root->right);

    return max(currDiam , max(leftDiam,rightDiam));
     

}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    cout<<"Maximum Diameter of Tree : "<<diameter(root);

return 0;
}