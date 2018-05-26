/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        int i = 0,j = 0;
        int n = nums.size();
        
        while(i < n && j < n-1)
        {
            
            while(nums[i] != 0 && i < n)
                i++;
            
            j = i;
            
            while(nums[j] == 0 && j < n-1)
                j++;

            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp; 
        }
        
    }
};