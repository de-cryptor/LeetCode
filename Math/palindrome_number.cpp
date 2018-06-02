/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x > 0 && x%10 == 0))
            return false;
        int rev = 0;
        while(x > rev)
        {
            rev = rev*10 + x%10;
            x = x/10;
        }
        if(x == rev || rev/10 == x)
            return true;
        
        return false;
    }
};