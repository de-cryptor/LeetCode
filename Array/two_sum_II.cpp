/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int sum = 0;
        vector<int> ans;
        while(start < end)
        {
            sum = nums[start] + nums[end];
            if(sum < target)
                start++;
            else if (sum > target)
                end--;
            else
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
        }
    }
};