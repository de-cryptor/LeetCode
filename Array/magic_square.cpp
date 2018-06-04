/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution{
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<(int)grid.size()-2;i++)
        {
            for(int j=0;j<(int)grid[0].size()-2;j++)
            {
                if(check(grid,i,j))
                	res++;
            }
        }
        return res;
    }
private:
    bool check(vector<vector<int>>& grid,int r,int c){
        for(int i=r;i<r+3;i++)
        {
            int sum=0;
            for(int j=c;j<c+3;j++)
            {
                if(grid[i][j]<1||grid[i][j]>9)
                    return false;
                sum+=grid[i][j];
            }
            if(sum!=15)
                return false;
        }
        for(int i=c;i<c+3;i++)
        {
            int sum=0;
            for(int j=r;j<r+3;j++)
            {
                sum+=grid[j][i];
            }
            if(sum!=15)
                return false;
        }
        int dsum1=grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2];
        int dsum2=grid[r+2][c]+grid[r+1][c+1]+grid[r][c+2];
        return dsum1==15&&dsum2==15;
    }
};