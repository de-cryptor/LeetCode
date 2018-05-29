/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+5];
        for(int i=0;i<=amount;i++)
            dp[i] = amount+1;
        dp[0] = 0;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j] <= i)
                    dp[i] = min(dp[i],(dp[i-coins[j]]+1));
            }
        }
        return dp[amount]==amount+1?-1:dp[amount];
    }
};