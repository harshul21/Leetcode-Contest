//Lvl-Easy
//Problem Link:-https://leetcode.com/problems/shift-2d-grid/
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        if(k==0){
            return grid;
        }
        while(k--){
            int a=0;
            int b=0;
            for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 and j==0){
                    continue;
                }
                else{
                    ans[i][j]=grid[a][b];
                    b++;
                    if(b==m){
                        b=0;
                        a++;
                    }
                }
            }
        }
        ans[0][0]=grid[n-1][m-1];
        grid=ans;
        }
        return ans;
    }
};
