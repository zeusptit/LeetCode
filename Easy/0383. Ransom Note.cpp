class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp;
        int  i = ransomNote.length();
        for(auto it : ransomNote)mp[it]++;
        for(char x : magazine)
        {
            if(mp[x] > 0)
            {
                i--;
                mp[x]--;
            }
        }
        return i == 0;
    }
};