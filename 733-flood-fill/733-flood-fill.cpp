class Solution {
public:
    void helper(vector<vector<int>>& image, int i, int j, int color,int startColor, int n, int m,vector<vector<int>>& vis){
        if(i<0 || j<0 || i>=n || j>=m){
            return;
        }
        if(vis[i][j] || image[i][j]!=startColor){
            return;
        }
        vis[i][j]=1;
        image[i][j]=color;
        helper(image,i+1,j,color,startColor,n,m,vis);
        helper(image,i,j+1,color,startColor,n,m,vis);
        helper(image,i-1,j,color,startColor,n,m,vis);
        helper(image,i,j-1,color,startColor,n,m,vis);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size(); 
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int startColor=image[sr][sc];
        helper(image,sr,sc,color,startColor,n,m,vis);
        return image;
    }
};