/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    static bool cmp(vector<int> a , vector<int> b) {
        
        return  a[1] < b[1];
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        int ans = 1;
        int n = pairs.size();
        int last_finish = pairs[0][1];
        for(int i=1;i<n;i++)
        {
        if(pairs[i][0] > last_finish)
        {
            last_finish = pairs[i][1];
            ans++;
        }
        }
        return ans;
    }
};