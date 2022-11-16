class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums)mp[it]++;
        int res = 0;
        for(auto it : mp)
            if(it.second > nums.size()/2)
                res = it.first;
        return res;
    }
};