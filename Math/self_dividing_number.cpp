/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            int temp=i,flag=1;
            while(temp)
            {
                if(temp%10 != 0)
                {
                    if(i%(temp%10))
                        flag = 0;
                }
                else
                    flag = 0;
                temp/=10;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};