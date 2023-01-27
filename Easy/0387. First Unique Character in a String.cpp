class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        int res = - 1;
        for(char x : s)mp[x]++;
        for(int i = 0; i < s.length(); i++)
            if(mp[s[i]] == 1)
                return i;
        return res;
    }
};