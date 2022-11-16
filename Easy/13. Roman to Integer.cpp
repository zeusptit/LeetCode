class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        vector<int> v(n);
        for(int i = 0; i  < s.length(); i++)
        {
            switch (s[i])
            {
                case 'I':
                    v[i] = 1;
                    break;
                case 'V':
                    v[i] = 5;
                    break;
                case 'X':
                    v[i] = 10;
                    break;
                case 'L':
                    v[i] = 50;
                    break;
                case 'C':
                    v[i] = 100;
                    break;
                case 'D':
                    v[i] = 500;
                    break;
                case 'M':
                    v[i] = 1000;
                    break;
            }
            
        }
        int res = 0;
        for(int i = 0; i < n - 1; i++)
            if(v[i] < v[i + 1])
                res -= v[i];
            else 
                res += v[i];
        res += v[v.size() - 1];
        return res;
    }
};