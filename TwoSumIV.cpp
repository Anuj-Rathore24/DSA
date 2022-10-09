// Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.

 

// Example 1:

// Input: root = [5,3,6,2,4,null,7], k = 9
// Output: true




// Solution-:
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> table;
        unordered_map<int,int>::iterator itr;
        stack<TreeNode *> stack;
        TreeNode *temp=root;
        stack.push(temp);
        while(!stack.empty()){
            temp=stack.top();
            itr=table.find(temp->val);
            stack.pop();
            if(itr==table.end()){
                table.insert({k-temp->val,1});
                if(temp->left) stack.push(temp->left);
                if(temp->right) stack.push(temp->right);
            }
            else return true;   
        }
        return false;
    }
};
