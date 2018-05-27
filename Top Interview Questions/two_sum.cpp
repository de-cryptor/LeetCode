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
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                break;
            }
            else
                mp[nums[i]] = i;
        }
        return ans;
    }
};