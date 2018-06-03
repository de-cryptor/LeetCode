/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        int zeros[n+5];
        int ones[n+5];
        memset(zeros,0,sizeof(zeros));
        memset(ones,0,sizeof(ones));
        int ctr = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0')
                ctr++;
            else
                ctr = 0;
            zeros[i] = ctr;
        }
        ctr=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
                ctr++;
            else
                ctr = 0;
            ones[i] = ctr;
        }
        int ans =0;
        for(int i=0;i<s.size();i++)
        {
            if(zeros[i] > 0 && i-zeros[i] >= 0)
            {
                if(ones[i-zeros[i]] >= zeros[i])
                    ans++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(ones[i] > 0 && i-ones[i] >= 0)
            {
                if(zeros[i-ones[i]] >= ones[i])
                    ans++;
            }
        }
        return ans;
    }
};