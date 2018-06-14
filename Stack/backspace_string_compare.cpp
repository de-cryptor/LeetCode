/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s,t;
        for(int i=0;i<S.size();i++)
        {
            if(S[i] == '#' && !s.empty())
                s.pop();
            else if(S[i] != '#')
                s.push(S[i]);
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i] == '#' && !t.empty())
                t.pop();
            else if(T[i] != '#')
                t.push(T[i]);
        }
        while(!s.empty() && !t.empty())
        {
            if(s.top() != t.top())
                return false;
            s.pop();
            t.pop();
        }
        if(s.empty() && t.empty())
            return true;
        else
            return false;
    }
};