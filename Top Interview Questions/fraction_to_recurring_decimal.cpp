/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    string fractionToDecimal(int num, int den) {
        if (num==0)
            return "0";
        bool negative = (num>=0)^(den>=0);
        long long n = abs( (long long)num );
        long long d = abs( (long long)den );
        long long q=n/d,r = n%d; 
        
        string s1, s2;
        unordered_map <int, int> map;
        
        s1=(negative)? "-":"";
     
        s1+=to_string(q);

        if(r==0)
        	return s1;
  
        while ( (r!=0) && (map.count(r)==0) )
        {          
            map[r] = s2.size();
            r = r*10;
            s2 += to_string( r / d);
            r= r % d;
        }
        
        if(r!=0){            
             s2.insert(map[r], "(");
             s2 += ")";
        }
       return s1+"."+s2;
    }
};