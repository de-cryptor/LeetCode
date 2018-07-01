/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int sum) {
        vector <vector<int> > ans;
        vector<int> digits;
        for(int i=1;i<=9;i++)
            digits.push_back(i);
        
        int n = pow(2,9);
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            for(int j=0;j<digits.size();j++)
            {
                if((i >> j) & 1 )
                {
                    temp.push_back(digits[j]);
                }
            }
            if (temp.size() == k)
            {
                if (accumulate(temp.begin(),temp.end(),0) == sum)
                    ans.push_back(temp);
            }
        }
        return ans;
    }
};