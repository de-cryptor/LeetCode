/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        int ans[size];
        ans[0] = cost[0];
        ans[1] = cost[1];
        for(int i=2;i<size;i++)
        {
            ans[i] = cost[i] + min(ans[i-1],ans[i-2]);
        }
        return min(ans[size-1],ans[size-2]);
    }
};