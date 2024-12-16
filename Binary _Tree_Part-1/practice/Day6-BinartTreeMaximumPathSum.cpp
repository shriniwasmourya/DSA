/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathDown(root , maxSum);
        return maxSum ; 
    }


    int maxPathDown(TreeNode* root , int &maxSum){
        //Base Case..

        if(root == NULL){
            return 0;
        }

        int leftSum = max(0,maxPathDown(root->left , maxSum));
        int rightSum = max(0,maxPathDown(root->right , maxSum));

        maxSum = max(maxSum , (leftSum+rightSum+root->val));
        return max(leftSum , rightSum) + root->val;
    }
};
