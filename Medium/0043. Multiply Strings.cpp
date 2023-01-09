class Solution {
public:
    string plus(string num1, string num2){
        while(num1.size() < num2.size())num1 = "0" + num1;
        while(num2.size() < num1.size())num2 = "0" + num2;
        string ans = "";
        int k = 0, n = num1.length(), temp = 0;
        for(int i = n - 1; i >= 0; i--){
            int k = num1[i] - '0' + num2[i] - '0' + temp;
            if(k > 9){
                ans += (k - 10) + '0';
                temp = 1;
            }
            else{
                ans += k + '0';
                temp = 0;
            }
        }
        if(temp != 0)ans += temp + '0';
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")return "0";
        string ans = "0";
        for(int i = num2.length() - 1; i >= 0; i--){
            string temp = ""; int k = 0, z;
            for(int j = num1.length() - 1; j >= 0; j--){
                int x = (num1[j] - '0') * (num2[i] - '0') + k;
                z = num2.length() - 1 - i;
                temp += (x % 10) + '0';
                k = x / 10;
            }
            if(k != 0)temp += k + '0';
            reverse(temp.begin(), temp.end());
            while(z--)temp += "0";
            ans = plus(ans,temp);
        }
        return ans;
    }
};