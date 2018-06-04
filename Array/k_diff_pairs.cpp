/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
            return 0;
        set < pair<int,int> > st;
        map<long long,long long> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]+k) != mp.end())
            {
                st.insert({min(nums[i],nums[i]+k),max(nums[i],nums[i]+k)});
            }
            if(mp.find(nums[i] - k) != mp.end())
            {
                st.insert({min(nums[i],nums[i]-k),max(nums[i],nums[i]-k)});
            }
            
            mp[nums[i]] = 1;
        }
        return st.size();
    }
};