class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        int r = (log(n) / log(2));
        return n == (int)pow(2,r);
    }
};