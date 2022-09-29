class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),temp;
        for(int i=0;i<n;i++){
            func(i,n, matrix);    
        }
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                temp=matrix[j][i];
                matrix[j][i]=matrix[j][n-i-1];
                matrix[j][n-i-1]=temp;
            }
        }
    }
    void func(int i, int n, vector<vector<int>>& mat){
        int temp;
        for(int j=1;j<n-i;j++){
            temp=mat[i][i+j];
            mat[i][i+j]=mat[i+j][i];
            mat[i+j][i]=temp;
        }
    }
};