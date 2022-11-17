class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        int end = min(strs[0].size(),strs[n - 1].size());
        string first = strs[0], last = strs[n - 1];
        int  i = 0;
        while(i < end && first[i] == last[i])
            i++;
        string res = first.substr(0,i);
        return res;
    }
};