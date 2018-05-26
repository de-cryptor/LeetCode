/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int getSum(int a, int b) {
        
        while(b)
        {
            int c = a&b;
            a = a^b;
            b = c << 1;
        }
        return a;

    }
};