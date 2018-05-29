/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> grid = board;
        int m=board.size(),n=board[0].size();
        int dir[8][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int l=0,d=0;
                for(int k=0;k<8;k++)
                {
                    int x = i+dir[k][0];
                    int y = j+dir[k][1];
                    if(x >=0 && x<m && y>=0 && y<n)
                    {
                        if(board[x][y])
                            l++;
                        else
                            d++;
                    } 
                }
                if(board[i][j])
                {
                    if(l<2)
                        grid[i][j] = 0;
                    if(l==2 || l==3)
                        grid[i][j] = 1;
                    if(l > 3)
                        grid[i][j] = 0;
                }
                else
                {
                    if(l==3)
                        grid[i][j] = 1;
                }
                
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                board[i][j] = grid[i][j];
        }
        
    }
};