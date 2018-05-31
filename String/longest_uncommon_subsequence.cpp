/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b)
            return -1;
        else
            return max(a.size(),b.size());
    }
};