/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(int i=0;i<magazine.size();i++)
        {
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(mp[ransomNote[i]] > 0)
            {
                mp[ransomNote[i]]--;
            }
            else
                return false;
        }
        return true;
        
    }
};