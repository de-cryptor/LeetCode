/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int sum =0,leftsum=0,rightsum;
        int n = a.size();
        for(int i=0;i<n;i++)
            sum += a[i];

        rightsum = sum;
        for(int i=0;i<n;i++)
        {
            rightsum -= a[i];
            if(leftsum == rightsum)
            {
                return i;
            } 
            leftsum += a[i];

        }
        return -1;
    }
};