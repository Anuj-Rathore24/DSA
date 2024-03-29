/*

Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).


*/


int rowWithMax1s(vector<vector<int> > mat, int n, int m) {
	    int i=0,j=m-1,ans=-1;
	    while(i<n and j>=0){
	        if(mat[i][j]==1){
			   ans=i;
	            j--;
	        }
	        if(mat[i][j]==0){
	        i++;
	        }
	   }
	    return ans;
	}
