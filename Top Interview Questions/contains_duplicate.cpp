/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]) != mp.end())
                return true;
            else
                mp[nums[i]] = 1;
        }
        return false;   
    }
};