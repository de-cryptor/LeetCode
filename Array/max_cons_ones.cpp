/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i])
                ctr++;
            else
                ctr = 0;
            ans = max(ans,ctr);
        }
        return ans;
    }
};