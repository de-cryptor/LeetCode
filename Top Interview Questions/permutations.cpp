/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    void all_permute(vector<int> s,int start,int end,vector<vector<int>> &ans)
    {
        if(start == end)
        {
            ans.push_back(s);
            return;
        }
        else
        {
            for(int i=start;i<=end;i++)
            {
                int temp = s[start];
                s[start] = s[i];
                s[i] = temp;
                all_permute(s,start+1,end,ans);
                //backtrack;
                temp = s[i];
                s[i] = s[start];
                s[start] = temp;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int start = 0,end = nums.size()-1;
		all_permute(nums,start,end,ans);
        return ans;
    }
};