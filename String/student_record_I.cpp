/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool checkRecord(string s) {
        int a = 0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
                l++;
            else
                l=0;
            if(s[i]=='A')
            {
                a++;
            }
            if(l>2)
                return false;
            if(a>1)
                return false;
                
        }
        return true;
    }
};