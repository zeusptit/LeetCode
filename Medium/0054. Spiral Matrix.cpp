class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int h1 = 0, h2 = matrix.size() - 1, c1 = 0, c2 = matrix[0].size() - 1;
        int k = (h2 + 1) * (c2 + 1);
        while(k){
            for(int i = c1; i <= c2; i++){
                if(k == 0)break;
                ans.push_back(matrix[h1][i]);
                k--;
            }h1++;
            for(int i = h1; i <= h2; i++){
                if(k == 0)break;
                ans.push_back(matrix[i][c2]);
                k--;
            }c2--;
            for(int i = c2; i >= c1; i--){
                if(k == 0)break;
                ans.push_back(matrix[h2][i]);
                k--;
            }h2--;
            for(int i = h2; i >= h1; i--){
                if(k == 0)break;
                ans.push_back(matrix[i][c1]);
                k--;
            }c1++;
        }
        return ans;
    }
};