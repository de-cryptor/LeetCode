/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        k--;
        while(k--)
        {
            pq.pop();
        }
        return pq.top();
    }
};