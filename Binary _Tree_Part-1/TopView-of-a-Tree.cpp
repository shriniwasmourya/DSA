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


void topView(Node* root){
    queue<pair<Node* , int>> Q; //Node or HD value
    map<int , int> m;          //HD value or Node->data store hoga


    Q.push(make_pair(root,0));  // Root ki defaul HD val 0 Hoti hai..

    while(!Q.empty()){
        pair<Node* , int> curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD) == 0){
            m[currHD] = currNode->data;
        }

        if(currNode->left != NULL){
            pair<Node* , int> leftChild = make_pair(currNode->left , currHD-1);
            Q.push(leftChild);
        }

           if(currNode->right != NULL){
            pair<Node* , int> rightChild = make_pair(currNode->right , currHD+1);
            Q.push(rightChild);
        }
    }


    for(auto it : m){
        cout<<it.second<<" ";
    }
}

int main(){
    vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Node : "<<root->data<<endl;


    topView(root);


return 0;
}