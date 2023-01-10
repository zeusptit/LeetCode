class Solution {
public:
    vector<vector<string>> ans;
    int X[100], xuoi[100], nguoc[100], thang[100];
    void Try(int i,int n){
        for(int j = 1; j <= n; j++){
            if(!thang[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
                X[i] = j;
                thang[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
                if(i == n){
                    vector<string> v;
                    for(int k = 1; k <= n; k++){
                        string temp(n, '.');
                        temp[X[k] - 1] = 'Q';
                        v.push_back(temp);
                    }
                    ans.push_back(v);
                }
                else
                    Try(i + 1, n);
                thang[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0; 
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        Try(1, n);
        return ans;
    }
};