/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map < multiset<char> , vector<string> > mp;
        
        for(int i=0;i<strs.size();i++)
        {
            multiset<char> ms;
            for(int j=0;j<strs[i].size();j++)
            {
                ms.insert(strs[i][j]);
            }
            mp[ms].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};