class Solution {
public:
    int climbStairs(int n) {
        long long int dp[100005] = {0};
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i <= n; i++)
        {
            for(int j = 1; j <= 2; j++)
            {
                dp[i] = dp[i] + dp[i - j];
            }
        }
        return dp[n];
    }
};

