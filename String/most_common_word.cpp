/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string temp="";
        set<string> st;
        for(int i=0;i<banned.size();i++)
        {
            st.insert(banned[i]);
        }
        map<string,int> mp;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                temp = temp + s[i];
            }
            if(s[i] == ' ' || i == s.size()-1)
            {
                mp[temp]++;
                temp="";
            }
        }
        vector< pair<int,string> > v;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            v.push_back({it->second,it->first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            if(st.find(v[i].second) == st.end())
                return v[i].second;
        }
    }
};