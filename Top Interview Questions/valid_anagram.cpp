/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int h1[260]={0};
        int h2[260]={0};
        
        for(int i=0;i<s.size();i++)
            h1[s[i]]++;
        
        for(int i=0;i<t.size();i++)
            h2[t[i]]++;
        bool ans = true;
        for(int i=0;i<260;i++)
        {
            if(h1[i] != h2[i])
                ans = false;
        }
        return ans;
        
    }
};