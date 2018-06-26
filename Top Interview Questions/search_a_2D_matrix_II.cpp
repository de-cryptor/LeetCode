/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m;
        if (n > 0)
            m = matrix[0].size();
        int i=0,j=m-1;
        while(i<n && j>=0)
        {
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
    }
};