/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findMaxForm(vector<string>& s, int m, int n) {
        int dp[m+5][n+5];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<s.size();i++)
        {
            int z=0,o=0;
            for(int j=0;j<s[i].size();j++)
            {
                if(s[i][j] == '0')
                    z++;
                else
                    o++;
            }
            
            for(int p=m;p>=z;p--)
            {
                for(int q=n;q>=o;q--)
                {
                    dp[p][q] = max(dp[p][q],1+dp[p-z][q-o]);
                }
            }
        }
        return dp[m][n];
        
    }
};