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




//Preorder Traversal
// cout<<"Preorder Traversal \n";
void perOrderTraversal(Node* root){
    //Base case

    if(root == NULL){
        // cout<<-1<<" ";
        return;
    }

    cout<<root->data<<" ";
    perOrderTraversal(root->left);
    perOrderTraversal(root->right);
}



//Inorder Traversal
// cout<<"Inorder Traversal \n";
void InOrderTraversal(Node* root){
    //Base case

    if(root == NULL){
        // cout<<-1<<" ";
        return;
    }

    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
    
}




//Postorder Traversal
// cout<<"postorder Traversal \n";
void postOrderTraversal(Node* root){
    //Base case

    if(root == NULL){
        // cout<<-1<<" ";
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
    cout<<endl;
}




//LevelOrder Traversal....

void LevelOrderTraversal(Node* root){

    queue<Node*> Q;

    //Base case..
    if(root==NULL){
        cout<<"Root Node is NULL \n";
        return;
    }

    Q.push(root);
    Q.push(NULL);

    // int sum = 0;
    while(!Q.empty()){
        Node* curr = Q.front();
        
        Q.pop();


        if(curr == NULL){
            cout<<endl;

            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }else{
        cout<<curr->data<<" ";
        // sum += curr->data;      //Sum of N nodes in this case 1+2+3+4+5+6 = 21...
        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }
      }
    }
    // cout<<"The sum of Nodes : "<<sum<<endl;


}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Data : "<<root->data<<endl;
    // perOrderTraversal(root);
    // InOrderTraversal(root);
    // postOrderTraversal(root);

    LevelOrderTraversal(root);

return 0;
}