/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        int LIS[n+5],cnt[n+5];
        for(int i=0;i<n;i++)
        {
            LIS[i] = 1;
            cnt[i] = 1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j] < nums[i])
                {
                    if(LIS[i] == LIS[j]+1)
                        cnt[i] += cnt[j];
                    if(LIS[i] < LIS[j] + 1)
                    {
                        LIS[i] = LIS[j]+1;
                        cnt[i] = cnt[j];
                    }
                    
                }
            }
        }
        
        int ans = -1;
        for(int i=0;i<n;i++)
            ans = max(ans,LIS[i]);
        int result=0;
        for(int i=0;i<n;i++)
        {
            if(ans == LIS[i])
                result += cnt[i];
        }
        
        return result;
    }
};