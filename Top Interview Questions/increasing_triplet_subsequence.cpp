/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int m1=INT_MAX,m2=INT_MAX;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i] <= m1)
                m1 = nums[i];
            else if(nums[i] <= m2)
                m2 = nums[i];
            else
                return true;
        }
        return false;
    }
};