class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1, i = n - 1;
        while(i >= 0 && nums[i] >= nums[i + 1]){
            i--;
        }
        if(i < 0)reverse(nums.begin(), nums.end());
        else{
            int k = n;
            while(nums[i] >= nums[k] && k > 0)k--;
            swap(nums[i], nums[k]);
            int l = i + 1, r = n;
            while(l < r){
                swap(nums[l++], nums[r--]);
            }
        }
        return;
    }
};