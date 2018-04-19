/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_so_far = 0;
        int max_ending_here = 0;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            max_ending_here += nums[i];
            if(max_ending_here < 0)
                max_ending_here = 0;
            if(max_so_far < max_ending_here)
                max_so_far = max_ending_here;
        }
        if(max_so_far == 0)
        {
            max_so_far = -INT_MAX;
            for(int i=0;i<n;i++)
            {
                max_so_far = max(max_so_far,nums[i]);
            }
        }
        return max_so_far;
    }
};