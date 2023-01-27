class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string v,u;
        for(char x : s)
        if(v.size())
        {
            if(x == '#')v.pop_back();
            else v += x;
        }else{
            if(x == '#')continue;
            else v += x;
        }
    for(char x : t)
        if(u.size())
        {
            if(x == '#')u.pop_back();
            else u += x;
        }else{
            if(x == '#')continue;
            else u += x;
        }
        return v == u;
    }
};