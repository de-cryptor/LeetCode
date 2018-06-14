/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        stack<int> s;
        int total = 0;
        for(int i=0;i<n;i++)
        {
            if(isdigit(ops[i][0]) || ops[i][0] == '-')
            {
                total += stoi(ops[i]);
                s.push(stoi(ops[i]));
            }
            if(ops[i][0] == 'D')
            {
                if(!s.empty())
                {
                    total += 2*s.top();
                    s.push(2*s.top());
                }
            }
            if(ops[i][0] == '+')
            {
                int r1=0,r2=0;
                if (!s.empty())
                {
                    r1 = s.top();
                    s.pop();
                }
                if(!s.empty())
                {
                    r2 = s.top();
                    s.pop();
                }
                total += r1  + r2;
                s.push(r2);
                s.push(r1);
                s.push(r1+r2);
            }
            if(ops[i][0] == 'C')
            {
                if(!s.empty())
                {
                    total -= s.top();
                    s.pop();
                }
            }
            cout << total << endl;
            
        }
        return total;
    }
};