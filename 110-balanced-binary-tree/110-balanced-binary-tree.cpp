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
    bool isBalanced(TreeNode* root) {
        
        bool result=false;

        int answer=height(root);
        if(answer!=-1){
            result=true;
        }
        return result;
    }
    int height(TreeNode *root){
        if(!root) return 1;
        int rankL=0,rankR=0;
        if(root->left) rankL+=height(root->left);
        if(root->right) rankR+=height(root->right);
        if(rankL==-1 || rankR==-1) return -1;
        if(abs(rankR-rankL)>1) return -1;
        
        return max(rankL,rankR)+1;
    }
};