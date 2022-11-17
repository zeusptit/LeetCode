class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size(), col = image[0].size();
        
        solve(image,sr,sc,row,col,image[sr][sc],color);
        return image;
    }
    
    void solve(vector<vector<int>>& image, int sr, int sc,int row,int col,int originColor, int color){
        if(sr < 0 || sc < 0 || sr > row - 1 || sc > col - 1)
            return;
        if(image[sr][sc] != originColor || image[sr][sc] == color )
            return;
        image[sr][sc] = color;
        solve(image, sr - 1, sc, row,col, originColor, color);
        solve(image, sr + 1, sc, row,col, originColor, color);
        solve(image, sr, sc - 1, row,col, originColor, color);
        solve(image, sr, sc + 1, row,col, originColor, color);
    }
};