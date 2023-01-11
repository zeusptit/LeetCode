class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = 0; i < triangle.size(); i++){
            for(int j = 0; j <= i; j++){
                if(i == 0)continue;
                else if(j == 0)
                    triangle[i][j] += triangle[i - 1][j];
                else if(j == i)
                    triangle[i][j] += triangle[i - 1][j - 1];
                else
                    triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
            }
        }
        int m = triangle.size(), n = triangle[m - 1].size(), ans = INT_MAX;
        for(int i = 0; i < n; i++)
            ans = min(ans, triangle[n - 1][i]);
        return ans;
    }
};