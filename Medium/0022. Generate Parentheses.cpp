class Solution {
public:
    string s;
    int check(string s){
        stack<int> st; int k = 0;
        for(char x : s){
            if(x == '('){
                st.push(x);
                k++;
            }
            else{
                if(!st.empty())st.pop();
            }
        }
        return st.size() == 0 && k == s.size() / 2;
    }
    vector<string> ans; 
    void Try(int k, string s){
        for(int j = 40; j <= 41; j++){
            s += (char)j;
            if(s.size() == k){
                if(check(s))
                    ans.push_back(s);
            }
            else 
                Try(k, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        Try(n * 2, "");
        return ans;
    }
};