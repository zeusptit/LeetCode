class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp, ans = "";
        while(ss >> temp){
            ans = temp + " " + ans;
        }
        ans.pop_back();
        return ans;
    }
};