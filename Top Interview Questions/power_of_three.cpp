/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0)
            return false;
        while (n % 3 == 0) 
        {
            n /= 3;
        }
        return n == 1;
    }
};