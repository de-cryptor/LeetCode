/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++)
            mn = min(mn,nums[i]);
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans += abs(nums[i] - mn);
        }
        return ans;
    }
};