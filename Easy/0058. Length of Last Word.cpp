class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string res = "", temp;
        while(ss >> temp)
            res = temp;
        return res.length();
    }
};