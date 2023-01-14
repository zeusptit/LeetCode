class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[1005][1005];
        text1 = "@" + text1;
        text2 = "@" + text2;
        int n = text1.size(), m = text2.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(text1[i] == text2[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n - 1][m - 1];
    }
};