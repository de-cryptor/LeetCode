/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int idx = 0;
        int ctr= 1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[idx])
                ctr++;
            else
                ctr--;
            if(ctr == 0)
            {
                ctr = 1;
                idx = i;
            }
        }
        return nums[idx];
    }
};