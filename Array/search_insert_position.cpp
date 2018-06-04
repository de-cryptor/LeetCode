/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator low;
        low = lower_bound(nums.begin(),nums.end(),target);
        return low - nums.begin();
    }
};