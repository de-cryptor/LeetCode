/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = nums[0];
        for(int i=0;i<nums.size();i++)
            mx = max(mx,nums[i]);
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == mx)
                continue;
            if(2*nums[i] > mx)
                return -1;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == mx)
                return i;
        }
    }
};