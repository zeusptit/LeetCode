class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(char x : s)mp[x]++;
        int res = 0,kt = 0;
        for(auto it : mp)
        {
            if(!(it.second % 2))
                res += it.second;
            else{
                if(!kt)
                {
                    res += it.second;
                    kt = 1;
                }else{
                    int temp = it.second - 1;
                    res += temp;
                }
            }
        }
        return res;
    }
};
