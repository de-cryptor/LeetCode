/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

class Solution {
public:
    int countSubstrings(string s) {
	    int n=s.size();
	    int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        //odd length
	        for(int j=0;i-j>=0 && i+j<n;j++)
	        {
	            if(s[i+j] == s[i-j])
	                count++;
	            else
	                break;
	        }
	        //even length
	        for(int j=0;i-1-j>=0 && i+j<n;j++)
	        {
	            if(s[i+j] == s[i-1-j])
	                count++;
	            else
	                break;
	        }
	    }
	    return count;
    }
};