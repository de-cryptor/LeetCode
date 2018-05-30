/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int first(vector<int>& a,int l,int h,int x,int n)
    {
        if(h>=l)
        {
            int mid = l + (h-l)/2;
            if((mid == 0 || x > a[mid-1]) && a[mid] == x)
            {
                return mid;
            }
            else if(a[mid] < x)
                return first(a,mid+1,h,x,n);
            else
                return first(a,l,mid-1,x,n);
        }
        return -1;
    }
public:
    int last(vector<int>& a,int l,int h,int x,int n)
    {
        if(h>=l)
        {
            int mid = l + (h-l)/2;
            if((mid == n-1 || x < a[mid+1]) && a[mid] == x  )
            {
                return mid;
            }
            else if(a[mid] > x)
                return last(a,l,mid-1,x,n);
            else
                return last(a,mid+1,h,x,n);
        }
        return -1;
    }
public:
    vector<int> searchRange(vector<int>& a, int x) {
        int n = a.size();
        int f = first(a,0,n-1,x,n);
		int l = last(a,0,n-1,x,n);
        vector<int> ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }
};