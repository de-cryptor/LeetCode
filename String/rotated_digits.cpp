/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int rotatedDigits(int N) {
        set<char> s;
        s.insert('2');
        s.insert('5');
        s.insert('6');
        s.insert('9');
        string n = to_string(N);
        int ans = 0;
        for(int i=1;i<=N;i++)
        {
            string n = to_string(i);
            int ctr = 0,flag=1;
            for(int j=0;j<n.size();j++)
            {
                if(s.find(n[j]) != s.end())
                    ctr++;
                if(n[j]=='3' || n[j] =='7' || n[j] == '4')
                    flag=0;
                    
            }
            if(flag)
                ans += ctr > 0 ? 1 :0;
        }
        return ans;
    }
};