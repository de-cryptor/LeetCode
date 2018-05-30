/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool dictionaryContains(string word,vector<string>& dictionary)
    {
        int size = dictionary.size();
        for (int i = 0; i < size; i++)
            if (dictionary[i].compare(word) == 0)
               return true;
        return false;
    }
public:
    bool wordBreak(string str, vector<string>& dictionary) {
        int size = str.size();
        if (size == 0)   
            return true;
        
        bool wb[size+1];
        memset(wb, 0, sizeof(wb)); 
        for (int i=1; i<=size; i++)
        {
            if (wb[i] == false && dictionaryContains( str.substr(0, i),dictionary ))
                wb[i] = true;
            
            if (wb[i] == true)
            {
                
                if (i == size)
                    return true;

                for (int j = i+1; j <= size; j++)
                {
    
                    if (wb[j] == false && dictionaryContains( str.substr(i, j-i),dictionary ))
                        wb[j] = true;

                    if (j == size && wb[j] == true)
                        return true;
                }
            }
        }
        return false;
    }
};