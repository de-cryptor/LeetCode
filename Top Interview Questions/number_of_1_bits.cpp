/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n)
        {
            ans += n%2;
            n /= 2;
        }
        return ans;
    }
};