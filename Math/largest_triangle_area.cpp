/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& p) {
        double ans=0;
        for(int i=0;i<p.size();i++)
        {
            for(int j=0;j<p.size();j++)
            {
                for(int k=0;k<p.size();k++)
                {
                    ans = max(ans,0.5*(p[i][0]*(p[j][1] - p[k][1])+p[j][0]*(p[k][1] - p[i][1])+p[k][0]*(p[i][1] - p[j][1])));
                }
            }
        }
        return ans;
    }
};