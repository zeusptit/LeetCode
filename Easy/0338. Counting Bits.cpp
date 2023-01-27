class Solution {
public:
    int convert(int n)
    {
        string res = "";
        while(n)
        {
            int temp = n % 2;
            res += temp + '0';
            n /= 2;
        }
        int ans = 0;
        for(auto x : res)ans += x - '0';
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        for(int i = 1; i <= n; i++)
            res.push_back(convert(i));
        return res;
    }
};