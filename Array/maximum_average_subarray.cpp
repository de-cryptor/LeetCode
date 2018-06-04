/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double ans;
        double sum[n+5];
        sum[0] = nums[0];
        for(int i=1;i<n;i++)
        {
            sum[i] = nums[i] + sum[i-1];
        }
        ans = sum[k-1]*1.0/k;
        for(int i=k;i<n;i++)
        {
            double tmp = (sum[i]-sum[i-k])*1.0/k;
            ans = max(ans,tmp);
        }
        return ans;
    }
};