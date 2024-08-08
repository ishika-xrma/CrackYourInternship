class Solution {
    void BFSgraph(int i, int j,vector<vector<char>>&grid){
            int m=grid.size();
            int n=grid[0].size();
            if(i<0||i>=m||j<0||j>=n||grid[i][j]=='0'){
                return;
            }
            grid[i][j]='0';
            BFSgraph(i,j+1,grid);
            BFSgraph(i,j-1,grid);
            BFSgraph(i+1,j,grid);
            BFSgraph(i-1,j,grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()){
            return 0;
        }
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    BFSgraph(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};