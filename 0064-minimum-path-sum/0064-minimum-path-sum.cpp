class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> dp(n,0);
        dp[n-1] = grid[m-1][n-1];
        for(int j=n-2;j>=0;j--){
            dp[j]=grid[m-1][j]+dp[j+1];
            }
        for(int i=m-2;i>=0;i--){
            dp[n-1]+=grid[i][n-1];
            for(int j=n-2;j>=0;j--){
                dp[j]=grid[i][j]+ min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
    }
};