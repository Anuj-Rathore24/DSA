/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p||root==q){
            return root;
        }else{
            TreeNode *node2=nullptr,*node1=nullptr;
            if(root->left){
                node1=lowestCommonAncestor(root->left,p,q);            
            }
            if(root->right){
                node2=lowestCommonAncestor(root->right,p,q);            
            }
            if(node1 && node2) return root;
            else{
                if(node1) return node1;
                else if(node2) return node2;
            }
        }
        
        return nullptr;
    }
};