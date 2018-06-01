/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid,int &ctr,int visited[][105])
    {
        visited[i][j] = 1;
        ctr++;
        int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
        int m = grid.size(),n=grid[0].size();
        for(int k=0;k<4;k++)
        {
            int p = i + dir[k][0];
            int q = j + dir[k][1];
            if(p>=0 && p<m && q >=0 && q <n)
            {
                if(grid[p][q] && !visited[p][q])
                {
                    dfs(p,q,grid,ctr,visited);
                }
            }
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0,ctr=0;
        int visited[105][105] = {0};
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j])
                {
                    dfs(i,j,grid,ctr,visited);
                    ans = max(ans,ctr);
                    ctr = 0;
                }
                
            }
        }
        return ans;
    }
};