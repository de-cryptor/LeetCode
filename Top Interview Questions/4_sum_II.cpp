/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int,int> mp;
        int ans = 0;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                mp[A[i]+B[j]]++;
            }
        }
        for(int i=0;i<C.size();i++)
        {
            for(int j=0;j<D.size();j++)
            {
                int target = -(C[i]+D[j]);
                if(mp.find(target) != mp.end())
                    ans += mp[target];
            }
        }
        return ans;
    }
};