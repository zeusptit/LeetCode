class Solution {
public:
    int solve(int &n)
    {
        int sum = 0;
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
        return n;
    }
    int addDigits(int num) {
        while(num >= 10)
            solve(num);
        return num;
    }
};