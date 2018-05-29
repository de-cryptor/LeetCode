/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& board) {
        vector<vector<int>> ans;
        int m=board.size(),n=board[0].size();
        int dir[8][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        
        for(int i=0;i<m;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                int ctr=1,sum=board[i][j];
                
                for(int k=0;k<8;k++)
                {
                    int x = i+dir[k][0];
                    int y = j+dir[k][1];
                    if(x >=0 && x<m && y>=0 && y<n)
                    {
                        sum += board[x][y];
                        ctr++;
                    } 
                }
                v.push_back(sum/ctr);
            }
            ans.push_back(v);
        }
        return ans;
    }
};