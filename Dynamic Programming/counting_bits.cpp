/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp (num+1,0);
        for(int i=1;i<=num;i++)
        {
            dp[i] = dp[i/2] + i%2;
        }
        return dp;
    }
};