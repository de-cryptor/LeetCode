/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int ctr = 0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] ==0 && (i-1 < 0 || a[i-1]==0) && (i+1 >=a.size() || a[i+1]==0))
            {
                ctr++;
                a[i] = 1;
            }
        }
        return ctr >= n;
    }
};