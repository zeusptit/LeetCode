class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1, l = 0, r = nums.size() - 1;
        while(l <= r)
        {
            int m = (l + r)/2;
            if(nums[m] == target)
            {
                res = m;
                return res;
            }else if(nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }
        return res;
    }
};