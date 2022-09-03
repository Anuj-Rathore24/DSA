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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr) return result;
        queue<TreeNode*> table,table2;
        TreeNode* temp=root;
        vector<int> tempVec;
        tempVec.push_back(root->val);
        result.push_back(tempVec);
        tempVec.clear();
        if(temp->left) {
            tempVec.push_back(temp->left->val);
            table.push(temp->left);
        }
        if(temp->right) {
            tempVec.push_back(temp->right->val);
            table.push(temp->right);
        }
        if(!tempVec.empty())result.push_back(tempVec);
        
        while(!table.empty()){
            temp=table.front();
            if(temp->left){
                table2.push(temp->left);
            }
            if(temp->right){
                table2.push(temp->right);
            }
            table.pop();
            if(table.empty()){
                if(table2.empty()) break;
                table=table2;
                tempVec.clear();
                while(!table2.empty()) {
                    tempVec.push_back(table2.front()->val);    
                    table2.pop();
                }
                result.push_back(tempVec);
            }
        }
        
        return result;
    }
};