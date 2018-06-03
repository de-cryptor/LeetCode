/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int ans = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] != ' ')
                ans++;
            else if ( ans > 0)
                break;
                
        }
        return ans;
    }
};