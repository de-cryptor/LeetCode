/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    static bool cmp(string a,string b)
    {
        return a+b > b+a;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(int i=0;i<nums.size();i++)
        {
            str.push_back(to_string(nums[i]));
        }
        sort(str.begin(),str.end(),cmp);
        string ans = "";
        
        for(int i=0;i<str.size();i++)
            ans += str[i];
        
        while(1)
        {
            if(ans[0] == '0')
                ans.erase(0,1);
            else
                break;
                
        }
        if(ans == "")
            return "0";
        return ans;
    }
};