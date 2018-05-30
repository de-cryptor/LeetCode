/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int> v;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(a[i] <= b[j])
            {
                v.push_back(a[i++]);
            }
            else
            {
                v.push_back(b[j++]);
            }
        }
        while(i<m)
        {
            v.push_back(a[i++]);
        }
        while(j<n)
        {
            v.push_back(b[j++]);
        }
        for(int i=0;i<v.size();i++)
        {
            a[i] = v[i];
        }
        
    }
};