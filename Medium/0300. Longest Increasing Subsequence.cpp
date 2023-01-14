class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            auto it = lower_bound(v.begin(), v.end(), nums[i]);
            if(it == v.end())
                v.push_back(nums[i]);
            else
                *it = nums[i];
        }
        return v.size();
    }
};