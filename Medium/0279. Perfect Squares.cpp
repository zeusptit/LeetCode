class Solution {
public:
    int res = INT_MAX;
    void Try(int i, int sum, int n)
    {
        for(int j = sqrt(n); j >= 1; j--)
        {
            sum += j * j;
            if(sum == n)
                res = min(res, i);
            else if(sum < n && i < res)
                Try(i + 1, sum, n);
            sum -= j * j;
        }
    }
    int numSquares(int n) {
        Try(1, 0, n);
        return res;
    }
};