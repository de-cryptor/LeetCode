/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int countPrimes(int n) {
        int primes[n+5];
        memset(primes,1,sizeof(primes));
        primes[0] = 0;
        primes[1] = 0;
        int count = 0;
        for(int i=2;i*i <= n;i++)
        {
            for(int j=2*i;j<n;j = j+i)
                primes[j] = 0;
        }
        for(int i=1;i<n;i++)
            if(primes[i])
                count++;
        return count;
    }
};