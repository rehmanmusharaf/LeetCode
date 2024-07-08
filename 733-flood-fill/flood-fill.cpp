class Solution {
public:
bool isValid(vector<vector<int>>& image,int n,int m, int sr, int sc,int color,int newcolor)
{
if(sr>=0&&sr<n&&sc>=0&&sc<m&&image[sr][sc]==color)
return true;
return false;
}
void floodfillrec(vector<vector<int>>& image,int n, int m, int sr, int sc,int color,int newcolor)
{
image[sr][sc]=newcolor;
if(isValid(image,n,m,sr+1,sc,color,newcolor))
{
floodfillrec(image,n,m, sr+1, sc,color, newcolor);
}
if(isValid(image,n,m,sr-1,sc,color,newcolor))
{
floodfillrec(image,n,m, sr-1, sc,color ,newcolor);
}
if(isValid(image,n,m,sr,sc+1,color,newcolor))
{
floodfillrec(image,n,m,sr, sc+1,color, newcolor);
}
if(isValid(image,n,m,sr,sc-1,color,newcolor))
{
floodfillrec(image,n,m, sr, sc-1,color, newcolor);
}
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int n=image.size();
        int m=image[0].size();
        int color=image[sr][sc];
        if(color==newcolor)
        return image;
        floodfillrec(image,n,m, sr, sc,color, newcolor);
        return image;
    }
};