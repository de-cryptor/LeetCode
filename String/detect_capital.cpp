/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int idx = -1;
        int c = 0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                c++;
                idx = i;
            }
        }
        if(c==0 || c == word.size() || (idx == 0 && c == 1))
            return true;
        return false;
    }
};
