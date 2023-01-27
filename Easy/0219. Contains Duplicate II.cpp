class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i  < nums.size(); i++)
        {
            if(abs(i + 1 - mp[nums[i]]) <= k && mp[nums[i]])
                return true;
            mp[nums[i]] = i + 1;
        }
        return false;
    }
};