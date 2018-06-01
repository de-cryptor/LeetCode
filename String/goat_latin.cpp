/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    string toGoatLatin(string s) {
        string A_str = "a";
        string ans="",last="";
        int word_flag=1;
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<s.size();i++)
        {
            // all except below cond.
            if(!word_flag && s[i] != ' ')
                ans = ans + s[i];
            //begin & vowel
            if(word_flag && find(vowels.begin(),vowels.end(),s[i]) != vowels.end())
            {
                ans = ans + s[i];
                last = "";
                word_flag = 0;
            }
            //begin & cons
            if(word_flag && find(vowels.begin(),vowels.end(),s[i]) == vowels.end())
            {
                last = s[i] ;
                word_flag = 0;
            }
            //space 
            if(s[i] == ' ')
            {
                ans = ans + last + "ma" + A_str + " ";
                A_str = A_str + "a";
                word_flag = 1;
            }
            // last index
            if(i == s.size()-1)
            {
                ans = ans + last + "ma" + A_str;
            }
            
        }
        return ans;
    }
};