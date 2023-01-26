class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int d[100001] = {0}, res = 0;
        for(int x : nums){
            d[x]++;
            if(d[x] > 1){
                res = x;
                break;
            }
        }
        return res;
    }
};