/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int R = nums.size();
        int C = nums[0].size();
        
        if(R*C != r*c)
            return nums;
        
        vector<vector<int>> ans(r);
        int rr = 0,ctr=0;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                ans[rr].push_back(nums[i][j]);
                ctr++;
                if(ctr%c == 0)
                    rr++;
            }
        }
        return ans;
    }
};