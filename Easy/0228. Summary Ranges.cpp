class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int n = nums.size();
        if(n == 0)
            return v;
        int temp = nums[0];
        for(int i = 0; i < n; i++)
        {
            if(i == n - 1 || nums[i] + 1 != nums[i + 1])
            {
                if(nums[i] != temp)
                    v.push_back(to_string(temp) + "->" + to_string(nums[i]));
                else
                    v.push_back(to_string(temp));
                if(i != n - 1)
                    temp = nums[i + 1];
            }
        }
        return v;
    }
};