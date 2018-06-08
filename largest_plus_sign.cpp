/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int orderOfLargestPlusSign(int N, vector<vector<int>>& mines) {
        int mat[N][N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
                mat[i][j] = 1;
        }
        for(int i=0;i<mines.size();i++)
            mat[mines[i][0]][mines[i][1]] = 0;
        int left[N][N], right[N][N], top[N][N],bottom[N][N];
 
 
        for (int i = 0; i < N; i++)
        {
            top[0][i] = mat[0][i];
            bottom[N - 1][i] = mat[N - 1][i];
            left[i][0] = mat[i][0];
            right[i][N - 1] = mat[i][N - 1];
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 1; j < N; j++)
            {
                // calculate left matrix (filled left to right)
                if (mat[i][j] == 1)
                    left[i][j] = left[i][j - 1] + 1;
                else
                    left[i][j] = 0;

                // calculate top matrix
                if (mat[j][i] == 1)
                    top[j][i] = top[j - 1][i] + 1;
                else
                    top[j][i] = 0;

                // calculate new value of j to calculate
                // value of bottom(i, j) and right(i, j)
                j = N - 1 - j;

                // calculate bottom matrix
                if (mat[j][i] == 1)
                    bottom[j][i] = bottom[j + 1][i] + 1;
                else
                    bottom[j][i] = 0;

                // calculate right matrix
                if (mat[i][j] == 1)
                    right[i][j] = right[i][j + 1] + 1;
                else
                    right[i][j] = 0;

                // revert back to old j
                j = N - 1 - j;
            }
        }

        int n = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int len = min(min(top[i][j], bottom[i][j]),min(left[i][j], right[i][j]));
                if(len > n)
                    n = len;
            }
        }
        return n;
    }
};