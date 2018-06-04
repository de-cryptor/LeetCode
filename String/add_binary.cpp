class Solution {
/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 && j>=0)
        {
            int x = a[i--]-'0' , y = b[j--]-'0';
            int sum = x^y^carry;
            carry = x&y | y&carry | x&carry;
            char c = sum + '0';
            ans = c + ans;
        }
        while(i>=0)
        {
            int x = a[i--]-'0' , y = 0;
            int sum = x^y^carry;
            carry = x&y | y&carry | x&carry;
            char c = sum + '0';
            ans = c + ans;
        }
        while(j>=0)
        {
            int x = 0 , y = b[j--] - '0';
            int sum = x^y^carry;
            carry = x&y | y&carry | x&carry;
            char c = sum + '0';
            ans = c + ans;
        }
        cout << carry << endl;
        ans = (carry?"1":"") + ans;
        return ans;
    }
};