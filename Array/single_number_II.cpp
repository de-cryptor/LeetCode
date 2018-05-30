/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long sum = 0;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            s.insert(nums[i]);
        }
        
        long long sum1 = 0;
        for(auto it = s.begin();it!=s.end();it++)
        {
            sum1 += *it;
        }
        return (3*sum1 - sum)/2;
        
    }
};