/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        long low = 0;
        long high = x / 2 + 1;
        int ans;
        while (low <= high) 
        {
            long mid = (low + high) >> 1;
            if (mid * mid == (long)x)
            {
                return (int)mid;
            } else if (mid * mid > (long)x)
            {
                high = mid - 1;
            } else
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return (int)(ans);
    }
};