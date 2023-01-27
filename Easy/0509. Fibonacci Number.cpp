class Solution {
public: 
    int fibo[31];
    void init(){
        fibo[0] = 0, fibo[1] = 1;
        for(int i = 2; i <= 30; i++)
            fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int fib(int n) {
        init();
        return fibo[n];
    }
};