class Solution {
public:
    long long C[1005][1005]; int mod = 2 * 1e9;
    void init(){
        for(int i = 0; i <= 200; i++){
            for(int j = 0; j <= i; j++){
                if(j == 0 || i == j)
                    C[i][j] = 1;
                else
                    C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
            }
        }
    }
    int uniquePaths(int m, int n) {
        init();
        long long x = C[m + n - 2][m - 1];
        return x;
    }
};