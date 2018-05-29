/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0, l = 0, r = height.size() - 1;
        while (l < r) {
            maxarea = max(maxarea, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxarea;
    }
};