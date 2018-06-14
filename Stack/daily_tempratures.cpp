/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int> s;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            while(!s.empty() && nums[s.top()] < nums[i])
            {
                mp[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(i) != mp.end())
                ans.push_back(mp[i] - i);
            else
                ans.push_back(0);
        }
        return ans;
    }
};