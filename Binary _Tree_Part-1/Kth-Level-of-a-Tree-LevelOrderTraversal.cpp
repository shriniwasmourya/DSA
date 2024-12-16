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



//LevelOrder Traversal....

void LevelOrderTraversal(Node* root , int k){


    //Base case..
    if(root==NULL){
        cout<<"Root Node is NULL \n";
        return;
    }

    queue<Node*> Q;
    Q.push(root);
 
    int count = 0;
    
    while(!Q.empty()){
        int levelSize = Q.size();
        count++;
        if(count == k){
            for(int i=0 ; i<levelSize ; i++){
                Node* curr = Q.front();
                Q.pop();
                cout<<curr->data<<" ";
            }
            return;
        }

        for(int i=0 ; i<levelSize ; i++){
        Node* curr = Q.front();
        Q.pop();

        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }
      }
      }
      cout<<"Level "<<k<<" doesnt not exit"<<endl;
    }
    




int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    // perOrderTraversal(root);
    // InOrderTraversal(root);
    // postOrderTraversal(root);

    LevelOrderTraversal(root,2);

return 0;
}