class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1, cnt = 1, k = n / 2 + 1;
        while(k--){
            for(int i = c1; i <= c2; i++)res[h1][i] = cnt++;h1++;
            for(int i = h1; i <= h2; i++)res[i][c2] = cnt++;c2--;
            for(int i = c2; i >= c1; i--)res[h2][i] = cnt++;h2--;
            for(int i = h2; i >= h1; i--)res[i][c1] = cnt++;c1++;
        }
        return res;
    }
};