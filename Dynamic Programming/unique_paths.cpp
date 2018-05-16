/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m+5][n+5];
        for(int i=0;i<m;i++)
        {
            dp[i][0] = 1;
        }
        for(int i=0;i<n;i++)
        {
            dp[0][i] = 1;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};