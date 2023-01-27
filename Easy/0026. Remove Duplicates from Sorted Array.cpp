class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> idx;
        idx.push_back(0);
        for(int i = 1; i < nums.size(); i++)
            if(nums[i] != nums[i - 1])
                idx.push_back(i);
        int k = 0;
        for(int i = 0; i < idx.size(); i++)
            nums[k++] = nums[idx[i]];
        return k;
    }
};