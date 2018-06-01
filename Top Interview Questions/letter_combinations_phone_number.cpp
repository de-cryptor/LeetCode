/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    void backtrack(string digits,vector<vector<char>> keypad ,string temp,vector<string> &ans,int pos)
    {
        if(pos == digits.size())
        {
            ans.push_back(temp);
            return;
        }
        int val = digits[pos] - '0';
        for(int i=0;i<keypad[val].size();i++)
        {
            temp.push_back(keypad[val][i]);
            backtrack(digits,keypad,temp,ans,pos+1);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0)
            return ans;
        vector<vector<char>> keypad(9 + 1);
        keypad[2] = {'a', 'b', 'c'};
        keypad[3] = {'d', 'e', 'f'};
        keypad[4] = {'g', 'h', 'i'};
        keypad[5] = {'j', 'k', 'l'};
        keypad[6] = {'m', 'n', 'o'};
        keypad[7] = {'p', 'q', 'r', 's'};
        keypad[8] = {'t', 'u', 'v'};
        keypad[9] = {'w', 'x', 'y', 'z'};
        
        backtrack(digits,keypad,"",ans,0);
        return ans;
    }
};