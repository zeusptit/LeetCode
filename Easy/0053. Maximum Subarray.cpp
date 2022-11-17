class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = 0,sum = 0,kt = 0;
        for(int x : nums)
        {
            if(x > 0)kt = 1;
            sum += x;
            if(sum <= 0)sum = 0;
            res = max(res,sum);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        if(kt)return res;
        else return nums[0];
    }
};