/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int m = A.size();
        int n = B.size();
        if(m==0 || n==0)
            return 0;
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        int ans = -1;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(A[i] == B[j])
                    dp[i][j] = 1 + dp[i+1][j+1];
                
                ans = max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};