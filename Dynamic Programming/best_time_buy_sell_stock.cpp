/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0)
            return 0;
        int dp[n];
        dp[0] = prices[0];
        for(int i=1;i<n;i++)
        {
            dp[i] = min(dp[i-1],prices[i]);
        }
        int profit = 0;
        for(int i=0;i<n;i++)
        {
            profit = max(profit,prices[i]-dp[i]);
        }
        return profit;
    }
};