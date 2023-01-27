class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        int kt = 0;
        for(auto x : s)mp[x]++;
        for(auto x : t)mp[x]--;
        for(auto it : mp)if(it.second)kt = 1;
        return kt == 0;
    }
};