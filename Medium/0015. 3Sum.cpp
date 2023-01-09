class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        if(nums.size() < 3 || nums[0] > 0)return res;
        unordered_map<int,int> ump;
        for(int i = 0; i < nums.size(); i++){
            ump[nums[i]] = i;
        }
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > 0)
                break;
            for(int j = i + 1; j < nums.size(); j++){
                int temp = -1 * (nums[i] + nums[j]);
                if(ump.count(temp) && ump[temp] > j){
                    res.push_back({nums[i], nums[j], temp});
                }
                j = ump[nums[j]];
            }
            i = ump[nums[i]];
        }
        return res;
    }
};