/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 0)
            return false;
        int n = nums.size();
        int last = n-1;
        for (int i=n-1;i>=0;i--)
        {
            if(nums[i] + i >= last)
                last = i;
        }
        if(last==0)
            return true;
        else
            return false;
        
    }
};