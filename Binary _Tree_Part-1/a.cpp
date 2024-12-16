
class Solution {
public:

    bool isIdentical(Node* root1 , Node* root2){

        //Base Case..

        if(root1 == NULL && root2 == NULL){
            return true;
        }else if(root1 == NULL || root2 == NULL){
            return false;
        };


        //Main Logic...
        if(root1->data != root2->datta){
            return false;
        }

        return isIdentical(root1->left , root2->left) && isIdentical(root1->right , root2->right);
        
    }
    bool isSubtree(Node* root, Node* subRoot) {
        //Base Case...

        if(root == NULL && subRoot == NULL){
            return true;
        }else if(root == NULL || subRoot == NULL){
            return false;
        }


        //Main Logic..

        if(root->data == subRoot->data){
            //Identical check
            if(isIdentical(root , subRoot)){
                return true;
            }
        }

        int isLeftSubtree = isSubtree(root->left , subRoot);
        if(isLeftSubtree){
            isSubtree(root->right , subRoot);
        }

        return true;
    } 
};