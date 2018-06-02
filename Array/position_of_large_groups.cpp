/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int ctr = 1,start=0,end=0;
        vector< vector<int> > ans;
        for(int i=1;i<S.size();i++)
        {
            if(S[i] == S[i-1])
            {
                ctr++;
                end++;
            }
            else
            {
                vector<int> v;
                if(ctr>=3)
                {
                    v.push_back(start);
                    v.push_back(end);
                    ans.push_back(v);
                }
                
                start = i;
                end = i;
                ctr = 1;
                
            }
        }
        vector<int> v;
        if(ctr>=3)
        {
            v.push_back(start);
            v.push_back(end);
            ans.push_back(v);
        }
        return ans;
    }
};