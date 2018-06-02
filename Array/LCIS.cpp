/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int ans=1,ctr=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] < nums[i+1])
                ctr++;
            else
                ctr = 1;
            ans = max(ctr,ans);
        }
        return ans;
    }
};