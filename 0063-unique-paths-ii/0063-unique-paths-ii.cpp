
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> grid(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(obstacleGrid[i][j] == 1) {
                    grid[i][j] = 0;
                }

                else if(i == 0 && j == 0) {
                    grid[i][j] = 1;
                }

                else {
                    int up = 0;
                    int left = 0;

                    if(i > 0)
                        up = grid[i-1][j];

                    if(j > 0)
                        left = grid[i][j-1];

                    grid[i][j] = up + left;
                }
            }
        }

        return grid[m-1][n-1];
    }
};
