/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int compress(vector<char>& s) {
        int ctr = 0;
        char c = s[0];
        string ans = "";
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == c)
            {
                ctr++;
                
            }
            else
            {
                ans = ans + c + (ctr > 1 ? to_string(ctr) : "");
                ctr = 1;
                c = s[i];
            }
        }
        ans = ans + c + (ctr > 1 ? to_string(ctr) : "");
        for(int i=0;i<ans.size();i++)
            s[i] = ans[i];
        cout << ans << endl;
        return ans.size();
    }
};