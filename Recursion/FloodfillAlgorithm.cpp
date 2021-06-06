class Solution {
public:
    void performColoring(vector<vector<int>>& image, int i, int j, int newColor, int n, int m, int originalColor)
    {
        if(i<0 or j<0 or i>=n or j>=m or image[i][j] != originalColor)
            return;
            
        image[i][j] = newColor;
        
        performColoring(image, i, j-1, newColor, n, m, originalColor);
        performColoring(image, i, j+1, newColor, n, m, originalColor);
        performColoring(image, i-1, j, newColor, n, m, originalColor);
        performColoring(image, i+1, j, newColor, n, m, originalColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        if (image[sr][sc] == newColor)
            return image;

        int row = image.size();
        int col = image[0].size();
        
        int originalColor = image[sr][sc];
        performColoring(image, sr, sc, newColor, row, col, originalColor);
        
        return image;
    }
};