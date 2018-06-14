/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            while(!s.empty() && s.top() < nums[i])
            {
                mp[s.top()] = nums[i];
                s.pop();
            }
            s.push(nums[i]);
        }
        vector<int> ans;
        for (int i=0;i<findNums.size();i++)
        {
            if(mp.find(findNums[i]) != mp.end())
                ans.push_back(mp[findNums[i]]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};