class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = 1;
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            int temp = digits[i] + k;
            if(temp > 9)
            {
                digits[i] = 0;
                k = 1;
            }else{
                digits[i] = temp;  
                k = 0;
            }
        }
        if(k)digits.insert(digits.begin(),k);
        return digits;
    }
};