class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> ump;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            ump[strs[i]].push_back(s);
        }
        for(auto it : ump)
            ans.push_back(it.second);
        return ans;
    }
};