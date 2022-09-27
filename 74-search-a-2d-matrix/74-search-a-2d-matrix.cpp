class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),col=matrix.at(0).size(),flag=1,index;
        for(int i=0;i<rows;i++){
            if(matrix[i][col-1]>=target){
                flag=0;
                index=i;
                break;
            }
        }
        if(flag) return false;
        flag=1;
        for(int i=0;i<col;i++){
            if(matrix[index][i]==target) return true;
        }
        if(flag) return false;
        return true;
    }
};