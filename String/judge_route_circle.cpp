/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
class Solution {
public:
    bool judgeCircle(string s) {
        int h=0,v=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'L')
                h++;
            else if(s[i] == 'R')
                h--;
            else if(s[i] == 'U')
                v++;
            else if(s[i] == 'D')
                v--;
            
        }
        if(h==0 && v==0)
            return true;
        else 
            return false;
    }
};