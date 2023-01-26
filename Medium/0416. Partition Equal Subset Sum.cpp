class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)sum += x;
        if(sum % 2)return false;
        sum /= 2;
        int dp[10001] = {0}; dp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = sum; j >= nums[i]; j--){
                if(dp[j - nums[i]])
                    dp[j] = 1;
            }
        }
        return dp[sum];
    }
};