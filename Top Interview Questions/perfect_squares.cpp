/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int numSquares(int n) {
        vector<int> squares;
        for(int i=1;i*i<=n;i++)
        {
            squares.push_back(i*i);
        }
        int dp[n+5];
        for(int i=0;i<=n;i++)
            dp[i] = n+1;
        dp[0] = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<squares.size();j++)
            {
                if(squares[j] <= i)
                    dp[i] = min(dp[i],(dp[i-squares[j]]+1));
            }
        }
        return dp[n]==n+1?-1:dp[n];
        
    }
};