/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
	    int row[9][10]={0},column[9][10]={0},box[9][10]={0};
	    
	    for(int i = 0; i < board.size(); ++ i)
	    {
	        for(int j = 0; j < board[i].size(); ++ j)
	        {
	            if(board[i][j] != '.')
	            {
	                int num = board[i][j] - '0';
	                int k = i / 3 * 3 + j / 3;
	                if(row[i][num] || column[j][num] || box[k][num])
	                    return false;
	                row[i][num] = column[j][num] = box[k][num] = 1;
	            }
	        }
	    }
	    return true;
        
    }
};