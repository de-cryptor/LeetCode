/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution { 
public:
    int check(string s,int l,int r)
    {
        int L=l,R=r;
        while(L >= 0 && R < s.size() && s[L] == s[R] )
        {
            L--;
            R++;
        }
        return R-L-1;
    }
public:
    string longestPalindrome(string s) {
        int start=0,end=0;
        int n = s.size();
        int mx = -1;
        for(int i=0;i<n;i++)
        {
            int l1 = check(s,i,i);
            int l2 = check(s,i,i+1);
            int len = max(l1,l2);
            if(len > mx )
            {
                start = i - (len-1)/2;
                mx = len;
            }
        }
        return s.substr(start,mx);
    }
};