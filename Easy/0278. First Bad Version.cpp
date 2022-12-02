// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long res = INT_MAX, l = 0, r = n;
        while(l <= r)
        {
            long m = (l + r)/2;
            if(isBadVersion(m))
            {
                if(res > m)
                    res = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        return res;
    }
};