/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int firstUniqChar(string s) {
        int h[260] = {0};
        for(int i=0;i<s.size();i++)
        {
            h[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(h[s[i]] == 1)
                return i;
        }
        return -1;
    }
};