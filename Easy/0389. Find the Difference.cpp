class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        for(char x : s)mp[x]++;
        for(char x : t)mp[x]++;
        for(auto it : mp)
            if(it.second % 2)
                return it.first;
        return 1;
    }
};