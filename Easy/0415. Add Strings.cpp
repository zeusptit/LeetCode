class Solution {
public:
    string addStrings(string num1, string num2) {
        while(num1.size() < num2.size())num1 = "0" + num1;
        while(num2.size() < num1.size())num2 = "0" + num2;
        int k = 0, n = num1.size();
        string ans = "";
        for(int i = n - 1; i >= 0; i--){
            int temp = num1[i] + num2[i] - 2 * '0' + k;
            if(temp > 9){
                ans += (temp % 10) + '0';
                k = 1;
            }else{
                ans += temp + '0';
                k = 0;
            }
        }
        if(k)ans = ans + "1";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};