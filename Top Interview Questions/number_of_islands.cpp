/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int dfs(int i,int j,vector<vector<char>>& grid)
    {
        int m = grid.size();
        int n = grid[i].size();
        if(i < 0 || i >= m || j <0 || j >= n || grid[i][j] == '0')
            return 0;
        grid[i][j] = '0';
        
        int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
        
        for(int k=0;k<4;k++)
        {
            int p = dir[k][0] + i;
            int q = dir[k][1] + j;
            dfs(p,q,grid);
        }
        return 1;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int island=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                island += dfs(i,j,grid);
            }
        }
        return island;
    }
};