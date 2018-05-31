/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        if(rec2[2]<=rec1[0] || rec2[0]>=rec1[2])
            return false;
        if(rec2[3]<=rec1[1] || rec2[1]>=rec1[3])
            return false;

        return true;
    }
};