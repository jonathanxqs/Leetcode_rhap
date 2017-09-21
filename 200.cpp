class Solution {
public:
    int len_row,len_col;
    
    int numIslands(vector<vector<char>>& grid) {
        len_row = grid.size();
        if (len_row == 0 ) return 0;
        len_col = grid[0].size();
        if (len_col == 0 ) return 0;
        int rt_cnt = 0;
        
        int i,j,k,i1,i2;
        for (i=0;i<len_row;i++ )
        {
            for (j=0;j<len_col;j++){
                if (dfs(grid,i,j) == 1) rt_cnt++;
                
            }
        }
        
        return rt_cnt;
    }
    
    int dfs(vector<vector<char>>& grid,int i,int j){
        
        if (i<0 or i>= len_row) return -1;
        if (j<0 or j>= len_col) return -1;
        
        if (grid[i][j] != 0){
            grid[i][j] = 0;
            
            dfs(grid,i+1,j);
            dfs(grid,i,j+1);
            dfs(grid,i-1,j);
            dfs(grid,i,j-1);
            return 1;
        }
        
        return 0;
        
     }
    
};