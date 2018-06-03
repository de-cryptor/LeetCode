/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool uglyrecur(int num)
    {
        if(num == 0)
            return false;
        if(num%5 == 0)
            return uglyrecur(num/5);
        if(num%3 == 0)
            return uglyrecur(num/3);
        if(num%2 == 0)
            return uglyrecur(num/2);
        return num == 1 ? true : false;
    }
public:
    bool isUgly(int num) {
        if(num == 1)
            return true;
        else
            return uglyrecur(num);
    }
};