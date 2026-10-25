class Solution {
public:
    bool dfs(vector<vector<int>>& grid,int i,int j){
       if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
        return false;
       }
       if(grid[i][j]==1){
          return true;
       }
    //    if(grid[i][j]==0){
          grid[i][j]=1;
    //    }
        bool l=dfs(grid,i,j-1);
        bool t=dfs(grid,i-1,j);
        bool r=dfs(grid,i,j+1);
        bool b=dfs(grid,i+1,j);
       return (l && t && r && b);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j)==true){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};