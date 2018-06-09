/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1) 
            return false;
        int half = sum >> 1;
        
        int dp[half+1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=half;j>=nums[i];j--)
            {
                if (dp[j-nums[i]]==1)
                    dp[j] = 1;
                    
            }
        }
        return dp[half];
    }
};