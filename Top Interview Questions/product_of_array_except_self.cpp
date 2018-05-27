/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int leftprod[n+5];
        int rightprod[n+5];
        leftprod[0] = 1;
        for(int i=1;i<n;i++)
        {
            leftprod[i] = nums[i-1]*leftprod[i-1];
        }
        rightprod[n-1] = 1;
        for(int i=n-2;i>=0;i--)
        {
            rightprod[i] = nums[i+1]*rightprod[i+1];
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
            ans.push_back(leftprod[i]*rightprod[i]);
        return ans;
    }
};