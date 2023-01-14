class Solution {
public:
    int X[100], unused[100]; vector<vector<int>> ans;
    void Try(int i, int sum, int n, int cnt, int k){
        for(int j = 1; j <= n; j++){
            if(!unused[j]){
                if(X[i - 1] > j || j > 9)continue;
                X[i] = j;
                sum += j;
                unused[j] = 1;
                if(i == k && sum == n){
                    vector<int> temp(X + 1, X + i + 1);
                        ans.push_back(temp);
                }else if( sum < n)
                    Try(i + 1, sum, n, cnt, k);
                sum -= j;
                unused[j] = 0;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        Try(1, 0, n, 0, k);
        return ans;
    }
};