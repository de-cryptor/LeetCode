/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int idx = abs(nums[i]) - 1;
            
            if(nums[idx] < 0)
                ans.push_back(abs(nums[i]));
            else
                nums[idx] = -1*nums[idx];
                
        }
        return ans;
    }
};