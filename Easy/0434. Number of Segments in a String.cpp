class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string temp;
        int cnt = 0;
        while(ss >> s)
            cnt++;
        return cnt;
    }
};