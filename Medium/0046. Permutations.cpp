class Solution {
public:
    int ok;
    void next(vector<int>& nums){
        int n = nums.size() - 1, i = n - 1;
        while(i >= 0 && nums[i] > nums[i + 1])i--;
        if(i < 0)ok = 0;
        else{
            int k = n;
            while(nums[i] > nums[k])k--;
            swap(nums[i], nums[k]);
            int l = i + 1, r = n;
            while(l < r)
                swap(nums[l++], nums[r--]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        ok = 1;
        vector<vector<int>> ans;
        while(ok){
            ans.push_back(nums);
            next(nums);
        }
        return ans;
    }
};