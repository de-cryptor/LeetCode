/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int trailingZeroes(int n) {
        
        int count = 0;
        for (long long i = 5; n / i >= 1; i *= 5)
            count += n / i;

        return count;
    }
};