class Solution {
public:
    int reverse(int x) {
        long xx = abs(x), res = 0;
        while(xx)
        {
            res = res * 10 + xx % 10;
            xx /= 10;
        }
        if(res > -pow(2,31) && res < pow(2,31) - 1)
            if(x < 0)return res * (-1);
            else return res;
        return 0;
    }
};