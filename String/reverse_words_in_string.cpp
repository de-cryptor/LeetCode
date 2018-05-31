/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
                st.push(s[i]);
            if(s[i] == ' ' || i == s.size()-1)
            {
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                if(s[i] == ' ')
                    ans.push_back(' ');
            }
        }
        return ans;
    }
};