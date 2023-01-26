class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        vector<int> v;
        for(int i = 0; i < numbers.size(); i++)
        {
            if(mp.count(target - numbers[i]))
            {
                v.push_back(mp[target - numbers[i]]);
                v.push_back(i + 1);
                return v;
            }
            mp[numbers[i]] = i + 1;
        }
        return v;
    }
};