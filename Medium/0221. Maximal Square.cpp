class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res = 0, n = matrix.size(), m = matrix[0].size(), dp[n][m];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 || j == 0)
                    dp[i][j] = matrix[i][j] - '0';
                else{
                    if(matrix[i][j] == '1')
                        dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                    else
                        dp[i][j] = 0;
                }
                res = max(dp[i][j], res);
            }
        }
        return res * res;
    }
};