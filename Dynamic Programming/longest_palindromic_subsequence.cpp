/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1 = s;
        reverse(s.begin(),s.end());
        string s2 = s;
        int n = s.size();
        int LPS[n+1][n+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    LPS[i][j] = 0;
                else if(s1[i-1] == s2[j-1])
                    LPS[i][j] = 1 + LPS[i-1][j-1];
                else
                    LPS[i][j] = max(LPS[i][j-1],LPS[i-1][j]);
            }
        }
        return LPS[n][n];
    }
};