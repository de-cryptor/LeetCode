/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        
        while(i>=0)
        {
            if(digits[i] + 1 < 10)
            {
                digits[i]++;
                break;
            }
            else
            {
                digits[i] = 0;
            }
            i--;
                
        }
        if(digits[0] == 0)
            digits.insert(digits.begin(),1);
        return digits;
    }
};