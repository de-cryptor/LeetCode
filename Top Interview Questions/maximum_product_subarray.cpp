/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int maxProduct(vector<int>& a) {
        int mx=a[0],mn=a[0],ans=a[0];
        int n = a.size();
        for(int i=1;i<n;i++)
        {
            if(a[i] < 0)
            {
                swap(mx,mn);
            }
            mx = max(mx*a[i],a[i]);
            mn = min(mn*a[i],a[i]);
            ans =max(ans,mx); 
        }
        
        return ans;
    }
};