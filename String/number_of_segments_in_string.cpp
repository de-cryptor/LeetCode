/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int countSegments(string s) {
        if(s == "")
            return 0;
        int sum =0,wordflag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                wordflag = 1;
            }
            if(s[i] == ' ')
            {
                sum += wordflag;
                wordflag = 0;
            }
        }
        return sum+wordflag;
    }
};