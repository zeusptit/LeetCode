class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int mod = 1e9 + 7;
        vector<vector<int>>res;
        int a[numRows + 1][numRows + 1];
        for(int i = 0 ; i < numRows ; i++)
        {
            vector<int> temp;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || i == j)
                    a[i][j] = 1;
                else
                    a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % mod;
                temp.push_back(a[i][j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};