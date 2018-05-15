
/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        int j=0;
        for(int i=0;i<tlen;i++)
        {
            if(t[i] == s[j])
                j++;
        }
        if(j==slen)
            return true;
        else 
            return false;
    }
};