/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
         if(n < 0) {
            x = 1/x;
            if(n == INT_MIN)
                return x * myPow(x, INT_MAX);
            else
                n = -n;
        }
        return n%2 == 0 ? myPow(x*x, n/2) : x * myPow(x, n-1);
    }
};