/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector < vector <int> > ans;
        if(nums.size() == 0)
            return ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set< vector<int> > s;
        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            int l = i+1;
            int r = n-1;
            while(l < r)
            {
                if(x + nums[l] + nums[r] == 0)
                {
                    vector<int> temp;
                    temp.push_back(x);
                    temp.push_back(nums[l++]);
                    temp.push_back(nums[r--]);
                    if(s.find(temp) == s.end())
                    {
                        ans.push_back(temp);
                        s.insert(temp);
                    }
                }
                else if(x + nums[l] +nums[r] < 0)
                {
                    l++;
                }
                else
                    r--;
            }
        }
        return ans;
    }
};