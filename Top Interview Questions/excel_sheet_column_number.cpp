/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for (int i=0;i<s.size();i++)
        {
            char c = s[i];
            result *= 26;
            result += c  - 'A' + 1;
        }

        return result;
    }
};