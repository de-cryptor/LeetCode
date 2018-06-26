
/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int visited[1005][1005]={0};
    int m=0,n=0,wlen=0,found=0;
public:
    void dfs(vector<vector<char>>& board, string word,int i,int j,int idx)
    {
        //cout << idx << " " << wlen << endl;
        if(wlen == idx+1)
        {
            found = 1;
            return;
        }
        visited[i][j] = 1;
        //cout << board[i][j] ;
        int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
        for(int k=0;k<4 && found==0;k++)
        {
            int p = i + dir[k][0];
            int q = j + dir[k][1];
            
            if(p >=0 && p < m && q >=0 && q < n)
            {
                if(!visited[p][q] && board[p][q] == word[idx+1] )
                {
                    dfs(board,word,p,q,idx+1);
                }
                    
            }
        }
        visited[i][j] = 0;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        m = board.size();
        wlen = word.size();
        if(m > 0)
            n = board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j] == word[0])
                {
                    dfs(board,word,i,j,0);
                    if (found)
                        return true;
                    //cout << endl;
                        
                }
            }
        }
        return false;
        
    }
};