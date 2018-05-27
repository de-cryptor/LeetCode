/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int minLen(vector<string> v)
    {
        int len = INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            int strsize = v[i].size();
            len = min(len,strsize);
        }
        return len;
    }
public:
    int check(vector<string> v,int mid)
    {
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<mid;j++)
            {
                if(v[i][j] != v[0][j] )
                    return 0;
            }
        }
        return 1;
    }
public:
    string longestCommonPrefix(vector<string>& v) {
        if(v.size() == 0)
            return "";
        int minlen = minLen(v);
        int l=1,h=minlen,ans=-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(check(v,mid))
            {
                l = mid+1;
                ans = mid;
            }
            else
            {
                h = mid -1;
            }
        }
        string str="";
        for(int i=0;i<ans;i++)
            str.push_back(v[0][i]);
        
        return str;
        
    }
};