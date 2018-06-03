/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        long long low = 0 , high = num-1;
        while(low <= high)
        {
            long mid = (low+high)/2;
            if(mid *mid > num)
                high = mid -1;
            else if (mid*mid < num)
                low = mid + 1;
            else 
                return true;
        }
        return false;
    }
};