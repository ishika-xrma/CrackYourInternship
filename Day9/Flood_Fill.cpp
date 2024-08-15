class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial=image[sr][sc];
        int delrow[]={0,-1,0,1};
        int delcol[]={-1,0,1,0};
        if(initial!=color){
        dfs(sr, sc, image, initial,color,delrow, delcol);
        }
        return image;

    }
    void dfs(int sr, int sc, vector<vector<int>>&image, int initial, int color,int delrow[], int delcol[]){
            if(sr<0 && sc<0 || sr>=image.size()||sc>=image[0].size() || image[sr][sc]!=initial ){
                return;
            }
            image[sr][sc]=color;
            for(int i=0;i<4;i++){
                int nrow= sr + delrow[i];
                int ncol= sc + delcol[i];
            
                dfs(nrow,ncol,image,initial,color,delrow,delcol);
        }
                
    }
};