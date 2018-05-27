/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string s1,s2;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                if(isalpha(s[i]))
                    s[i] = tolower(s[i]);
                s1.push_back(s[i]);
            }
        }
        s2 = s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2)
            return true;
        else
            return false;
    }
};