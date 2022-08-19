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
    int maxDepth(TreeNode* root) {
        int rankL=0,rankR=0;
        if(!root) return 0;
        if(root->left){
            rankL+=maxDepth(root->left);
        }
        if(root->right){
            rankR+=maxDepth(root->right);
        }
        return max(rankL,rankR)+1;
        
    }
};