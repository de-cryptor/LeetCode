/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        if(n==0)
            return ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        for(int i=1;i<n;i++)
        {
            vector<int> tmp;
            tmp.push_back(1);
            for(int j=1;j<ans[i-1].size();j++)
            {
                tmp.push_back(ans[i-1][j] + ans[i-1][j-1]);
            }
            tmp.push_back(1);
            ans.push_back(tmp);
        }
        return ans;
    }
};