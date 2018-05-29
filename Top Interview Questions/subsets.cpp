/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< vector<int> > ans;
        int n = pow(2,nums.size());
        
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            for(int j=0;j<nums.size();j++)
            {
                if(((i >> j) & 1) == 1)
                    temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};