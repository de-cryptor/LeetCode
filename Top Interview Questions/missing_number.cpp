/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size() ;
        int total = (n*(n+1))/2;
        for(int i=0;i<nums.size();i++)
            sum += nums[i];
        return total -sum;
    }
};