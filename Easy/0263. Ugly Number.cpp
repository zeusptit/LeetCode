class Solution {
public:
    bool isUgly(int n) {
        if(n == 1)return true;
        if(n <= 0) return false;
        vector<int> v;
        while(n % 2 == 0) n /= 2;
        for(int i = 3; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(i != 3 && i != 5)
                    return false;
                while(n % i == 0) n /= i;
            }
        }
        if(n > 1 && n != 2 && n != 3 && n != 5)return false;
        return true;
    }
};