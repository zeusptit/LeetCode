class Solution {
public:
    int cnt, X[100], xuoi[100], nguoc[100], thang[100];
    void Try(int i,int n){
        for(int j = 1; j <= n; j++){
            if(!thang[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
                X[i] = j;
                thang[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
                if(i == n)
                    cnt++;
                else
                    Try(i + 1, n);
                thang[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0; 
            }
        }
    }
    int totalNQueens(int n) {
        cnt = 0;
        Try(1, n);
        return cnt;
    }
};