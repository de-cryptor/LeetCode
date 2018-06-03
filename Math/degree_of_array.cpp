/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        map < int, vector<int> > mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                vector<int> v;
                v.push_back(1);
                v.push_back(i);
                v.push_back(i);
                mp[nums[i]] = v;
            }
            else
            {
                vector<int> v;
                v = mp[nums[i]];
                v[0] += 1;
                v[2] = i;
                mp[nums[i]] = v;
            }
        }
        
        map < int, vector<int> > :: iterator it1,it2;
        
        int mx = -1;
        
        for(it1=mp.begin();it1!= mp.end();it1++)
        {
            vector<int> v = it1->second;
            mx = max(mx,v[0]);
        }
        int ans = INT_MAX;
        for(it2=mp.begin();it2!= mp.end();it2++)
        {
            vector<int> v = it2->second;
            if(v[0] == mx)
            {
                ans = min(ans,v[2]-v[1]+1);
            }
        }
        return ans;
        
    }
};