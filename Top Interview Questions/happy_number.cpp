/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    bool isHappy(int n) {
        int l = 100;
        while(l--)
        {
            int sum =0;
            while(n)
            {
                int d = n%10;
                sum += d*d;
                n /= 10;
            }
            n = sum;
            if(sum==1)
                return true;
        }
        return false;
    }
};