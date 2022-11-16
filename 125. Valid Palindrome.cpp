class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(char x : s)
        {
            if(isalpha(x) || isdigit(x))
                v.push_back(tolower(x));
        }
        int i = 0, j = v.size() - 1;
        while(i < j)
        {
            if(v[i] != v[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};