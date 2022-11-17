class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0,min_val = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            min_val = min(min_val,prices[i]);
            int temp = prices[i] - min_val;
            res = max(res,temp);
        }
        return res;
    }
};