/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<nums1.size();i++)
        {
                mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
                mp2[nums2[i]]++;
        }
        for(auto it = mp1.begin();it!=mp1.end();it++)
        {
            if(mp2.find(it->first) != mp2.end())
            {
                for(int j=0;j<min(mp1[it->first],mp2[it->first]);j++)
                    ans.push_back(it->first);
            }
        }
        return ans;
    }
};