/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                if(i - mp[nums[i]] <= k)
                    return true;
                else
                    mp[nums[i]] = i;
            }
            else
                mp[nums[i]] = i;
        }
        return false;
        
    }
};