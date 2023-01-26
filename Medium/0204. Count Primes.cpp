class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n, 0);
        int ans = 0;
        for(int i = 2; i < n; i++){
            if(v[i]) continue;
            ans++;
            for(int j = 2 * i; j < n; j += i ){
                v[j] = 1;
            }
        }
        return ans;
    }
};