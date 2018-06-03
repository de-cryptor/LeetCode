/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
            return false;
        int sum = 1;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                sum += i + num/i;
            }
        }
        if(sum == num)
            return true;
        else
            return false;
    }
};