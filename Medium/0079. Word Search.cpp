class Solution {
public:
    pair<int,int> path[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    int ok = 0, a[100][100];
    void Try(int i, int j, vector<vector<char>>& board, string word, string bot, int t){
        bot += board[i][j];
        if(bot == word){
            ok = 1;
            return;
        }
        for(int k = 0; k < 4; k++){
            int inew = path[k].first + i;
            int jnew = path[k].second + j;
            if(inew >= 0 && inew < board.size() && jnew >= 0 && jnew < board[i].size() && board[inew][jnew] == word[t + 1] && !a[inew][jnew]){
                a[inew][jnew] = 1;
                Try(inew, jnew, board, word, bot, t + 1);
                a[inew][jnew] = 0;
            }
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == word[0]){
                    a[i][j] = 1;
                    Try(i, j, board, word, "", 0);
                    a[i][j] = 0;
                }
                if(ok)break;
            }
            if(ok)break;
        }
        return ok;
    }
};