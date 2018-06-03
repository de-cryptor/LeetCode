/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
bool palindrome(string s)
{
    int l=0,h=s.size()-1;
    while(l<h)
    {
        if(s[l++] == s[h--])
            continue;
        else
            return false;
    }
    return true;
}
public:
    bool validPalindrome(string s) {
        int l=0,h=s.size()-1;
        int flag = 1;
        while(l<h)
        {
            if(s[l] == s[h])
            {
                l++;
                h--;
                continue;
            }
            else
            {
                string s1 = s,s2 = s;
                s1.erase(l,1);
                s2.erase(h,1);
                if(palindrome(s1) || palindrome(s2))
                    return true;
                else
                    return false;
                
            }
        }
        return true;
    }
};