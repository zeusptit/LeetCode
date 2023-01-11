class Solution {
public:
    int X[100]; vector<vector<int>> ans;
    void Try(int i, int n, int k){
        for(int j = X[i - 1] + 1; j <= n - k + i; j++){
            X[i] = j;
            if(i == k){
                vector<int> temp(X + 1, X + k + 1);
                ans.push_back(temp);
            }else
                Try(i + 1, n, k);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        X[0] = 0;
        Try(1, n, k);
        return ans;
    }
};