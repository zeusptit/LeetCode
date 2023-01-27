class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int x : nums)mp[x]++;
        return mp.size() != nums.size();
    }
};