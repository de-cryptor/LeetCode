
/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        if(n==0)
            return 0;
        int l[n+5],r[n+5];
		l[0] = a[0];
		for(int i=1;i<n;i++)
			l[i] = max(a[i],l[i-1]);

		r[n-1] = a[n-1];
		for(int i=n-2;i>=0;i--)
			r[i] = max(a[i],r[i+1]);

		int ans = 0;
		for(int i=0;i<n;i++)
			ans += min(l[i],r[i]) - a[i];
		return ans;
    }
};