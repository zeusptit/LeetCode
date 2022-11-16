class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> se;
        int res = -1,max_val = -1;
        for(int x : nums)
        {
            se.insert(x);
            max_val = max(max_val,x);
        }
        for(int i = 0; i <= max_val; i++)
            if(!se.count(i))
            {
                res = i;
                break;
            }
        if(res == -1)res = max_val + 1;
        return res;
    }
};