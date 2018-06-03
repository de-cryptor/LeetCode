/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int miss;
        set<int> s;
        
            
        for(int i=0;i<nums.size();i++)
        {
            
            s.insert(nums[i]);
            sum += nums[i];
            
        }
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            {
                miss = i;
            }
        }
        
        int total = (n*(n+1))/2;
        return {miss-(total-sum),miss};
    }
};