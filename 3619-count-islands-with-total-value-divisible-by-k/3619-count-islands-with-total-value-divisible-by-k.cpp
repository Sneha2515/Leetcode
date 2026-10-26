class Solution {
public:
    long long dfs(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return 0;
        }
        if(grid[i][j]==0){
          return 0;
       }
       long long val = grid[i][j];
       grid[i][j] = 0;
       long long l=dfs(grid,i,j-1);
       long long t=dfs(grid,i-1,j);
       long long r=dfs(grid,i,j+1);
       long long b=dfs(grid,i+1,j);
       return val + l + t + r + b;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]>0){
                        if(dfs(grid,i,j)%k==0){
                                c++;
                        }
                    }
               }
           }
        return c;
    }
};