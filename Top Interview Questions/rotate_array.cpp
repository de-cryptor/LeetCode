/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d%n;
        d = n-d;
        for (int i = 0; i < __gcd(d, n); i++)
        {
            int temp = arr[i];
            int j = i;

            while(1)
            {
              int k = j + d;
              if (k >= n)
                k = k - n;

              if (k == i)
                break;

              arr[j] = arr[k];
              j = k;
            }
            arr[j] = temp;
        }
    }
};