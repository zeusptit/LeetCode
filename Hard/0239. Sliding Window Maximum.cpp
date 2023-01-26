class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<int> se;
        for(int i = 0; i < k; i++)se.insert(nums[i]);
        for(int i = 1; i <= nums.size() - k; i++){
            auto it1 = se.begin(), it2 = se.end(); it2--;
            ans.push_back(*it2);
            auto x = se.find(nums[i - 1]);
            se.erase(x);
            se.insert(nums[i + k - 1]);
        }
        auto it1 = se.begin(), it2 = se.end(); it2--;
        ans.push_back(*it2);
        return ans;
    }
};