/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class NumArray {
public:
    vector<int> prefixsum={0};
    NumArray(vector<int> nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            prefixsum.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return prefixsum[j+1] - prefixsum[i];
    }
    
};