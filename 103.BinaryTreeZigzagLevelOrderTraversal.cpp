/*
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

 

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]

Example 2:

Input: root = [1]
Output: [[1]]

Example 3:

Input: root = []
Output: []


*/


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;

        // vector for temporary storage of values
        vector<int> temp;
        // vector for temporary storage of Nodes
        vector<vector<TreeNode*>>vectorStorage;
        vector<TreeNode* >tempVec({root}),temp2;
        //Push the root element
        vectorStorage.push_back(tempVec);
        tempVec.clear();

        // iterate over dynamically increasing vector
        for(int i=0;i<vectorStorage.size();i++){
            temp2=vectorStorage[i];
            for(int j=0;j<temp2.size();j++){
                temp.push_back(temp2.at(j)->val);
                if(temp2.at(j)->left) tempVec.push_back(temp2.at(j)->left);
                if(temp2.at(j)->right) tempVec.push_back(temp2.at(j)->right);
            }
            result.push_back(temp);
            if(tempVec.empty()) break;
            vectorStorage.push_back(tempVec);
            tempVec.clear();
            temp.clear();
        }
        for(int i=0;i<result.size();i++){
            // Reverse Alternate vector
            if(i%2) reverse(result[i].begin(),result[i].end());
        }
        return result;
    }
};
