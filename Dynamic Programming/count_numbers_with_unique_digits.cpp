/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/


class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ctr = 0;
        int ways[] = {9,9,8,7,6,5,4,3,2,1};
        int temp = 1;
        for(int i=0;i<=n;i++)
        {
            ctr += temp;
            if(i < 10)
            {
                temp *= ways[i];
            }
        }
        return ctr;
    }
};