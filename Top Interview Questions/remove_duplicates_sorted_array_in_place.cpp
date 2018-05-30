/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int start = 1;
        int ele = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] > ele)
            {
                nums[start++] = nums[i];
                ele = nums[i];
            }
        }
        return start;
    }
};