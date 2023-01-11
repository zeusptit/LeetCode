class Solution {
public:
    int X[100]; vector<vector<int>> ans;
    void Try(int i, int pos, int n, vector<int> v){
        for(int j = pos; j < n; j++){
            X[i] = v[j];
            vector<int> temp(X + 1, X + i + 1);
            ans.push_back(temp);
            if(j + 1 == n)
                break;
            else
                Try(i + 1, j + 1, n, v);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        ans.push_back(temp);
        Try(1, 0, nums.size(), nums);
        return ans;
    }
};