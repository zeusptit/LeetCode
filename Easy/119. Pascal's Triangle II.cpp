class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res;
        int a[rowIndex + 1][rowIndex + 1];
        for(int i = 0 ; i <= rowIndex ; i++)
        {
            vector<int> temp;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || i == j)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                temp.push_back(a[i][j]);
            }
            res.push_back(temp);
        }
        return res[res.size() - 1];
    }
};