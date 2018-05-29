/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int l=0,m=0,h=n-1;
        while(m<=h)
        {
            switch(a[m])
            {
                case 0:
                {
                    int tmp;
                    tmp = a[l];
                    a[l] = a[m];
                    a[m] = tmp;
                    l++,m++;
                    break;
                }
                case 1:
                    m++;
                    break;
                case 2:
                {
                    int tmp;
                    tmp = a[h];
                    a[h] = a[m];
                    a[m] = tmp;
                    h--;
                    break;
                }

            }
        }
        
    }
};