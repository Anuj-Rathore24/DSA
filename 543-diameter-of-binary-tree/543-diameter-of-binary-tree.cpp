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
    int diameterOfBinaryTree(TreeNode* root) {
        int maximum=0, value;
        level(root,maximum);
        return maximum;
    }
    
    int level(TreeNode* root,int &maximum){
        int resultL=0,resultR=0;
        if(root==nullptr) return 0;
        
        resultL=level(root->left, maximum);
        resultR=level(root->right, maximum);

        maximum=max(maximum,resultL+resultR);
        
        return max(resultR,resultL)+1;
    }
};