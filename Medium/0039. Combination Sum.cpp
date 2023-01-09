class Solution {
public:
    int X[100];
    vector<vector<int>> ans;
    void Try(int sum, int i, int pos, vector<int>& v, int k){
        for(int j = pos; j <= v.size() - 1; j++){
            if(sum + v[j] <= k){
                sum += v[j];
                X[i] = v[j];
                if(sum == k){
                    vector<int> temp(X, X + i + 1);
                    ans.push_back(temp);
                }else
                    Try(sum, i + 1, j, v, k);
                sum -= v[j];
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        Try(0, 0, 0, candidates, target);
        return ans;
    }
};