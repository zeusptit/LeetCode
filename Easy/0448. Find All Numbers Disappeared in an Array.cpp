class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        map<int,int> mp;
        for(int x : nums)mp[x]++;
        for(int i = 1; i <= n; i++)
            if(!mp[i])
                v.push_back(i);
        return v;
    }
};