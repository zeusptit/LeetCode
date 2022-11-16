class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        while(a.length() < b.length()) a = "0" + a;
        while(b.length() < a.length()) b = "0" + b;
        int n = a.length(), k = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            int temp = a[i] + b[i] - 2 * '0' + k;
            if(temp >= 2)
            {
                res += (temp - 2) + '0';
                k = 1;
            }else
            {
                res += temp + '0';
                k = 0;
            }
        }
        if(k) res += k + '0';
        reverse(res.begin(),res.end());
        return res;
    }
};