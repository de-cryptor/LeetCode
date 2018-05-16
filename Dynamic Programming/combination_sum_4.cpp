/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) 
            return 0;
        
        int dp[target+1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(int i=1; i<=target; i++){
            for(int j=0; j<n; j++){
                if(nums[j] <= i)
                    dp[i] += dp[i-nums[j]];
            }
        }
        return dp[target];
    }
};