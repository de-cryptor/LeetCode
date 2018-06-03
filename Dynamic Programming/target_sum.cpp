/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int dp[nums.size()][2001];
        memset(dp,0,sizeof(dp));
        dp[0][nums[0] + 1000] = 1;
        dp[0][-nums[0] + 1000] += 1;
        for (int i = 1; i < nums.size(); i++) 
        {
            for (int sum = -1000; sum <= 1000; sum++) 
            {
                if (dp[i - 1][sum + 1000] > 0) 
                {
                    dp[i][sum + nums[i] + 1000] += dp[i - 1][sum + 1000];
                    dp[i][sum - nums[i] + 1000] += dp[i - 1][sum + 1000];
                }
            }
        }
        return S > 1000 ? 0 : dp[nums.size() - 1][S + 1000];
    }
};