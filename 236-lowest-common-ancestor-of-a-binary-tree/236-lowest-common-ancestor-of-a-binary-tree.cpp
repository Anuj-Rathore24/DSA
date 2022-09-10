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
        TreeNode* result=root;
        vector<TreeNode*> stack1,stack2;
        map<int,int> table;
        stack2.push_back(root);
        stack1.push_back(root);
        while(!stack1.empty()){
            if(stack1.back()==p) break;
            else if(stack1.back()->left&&table.find(stack1.back()->left->val)==table.end()){
                table.insert(pair<int,int>(stack1.back()->left->val,1));
                stack1.push_back(stack1.back()->left);
            }
            else if(stack1.back()->right&&table.find(stack1.back()->right->val)==table.end()){
                table.insert(pair<int,int>(stack1.back()->right->val,1));
                stack1.push_back(stack1.back()->right);
            }
            else{
                stack1.pop_back();
            }
        }
        
        table.clear();
        
        while(!stack2.empty()){
            if(stack2.back()==q) break;
            else if(stack2.back()->left&&table.find(stack2.back()->left->val)==table.end()){
                table.insert(pair<int,int>(stack2.back()->left->val,1));
                stack2.push_back(stack2.back()->left);
            }
            else if(stack2.back()->right&&table.find(stack2.back()->right->val)==table.end()){
                table.insert(pair<int,int>(stack2.back()->right->val,1));
                stack2.push_back(stack2.back()->right);
            }
            else{
                stack2.pop_back();
            }
        }
        
        for(int i=0;i<min(stack1.size(),stack2.size());i++){
            if(stack1.at(i)==stack2.at(i)) result=stack1.at(i);
        }
        return result;
        
    }
};