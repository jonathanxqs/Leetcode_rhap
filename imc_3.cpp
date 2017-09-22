// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
#include "limits.h"
#include<cmath>


    int len_row,len_col;
      
    int dfs(vector<vector<int>>& grid,int i,int j,int same_i){
    
    if (i<0 or i>= len_row) return -1;
    if (j<0 or j>= len_col) return -1;
    if (grid[i][j] == INT_MAX ) return -1;
        
    if (grid[i][j] == same_i){
        
        grid[i][j] = INT_MAX;
        
        dfs(grid,i+1,j,same_i);
        dfs(grid,i,j+1,same_i);
        dfs(grid,i-1,j,same_i);
        dfs(grid,i,j-1,same_i);
        return 1;
    }
    
    return 0;        
 }
     
     
    int solution(vector< vector<int> > &A) {
    // write your code in C++14 (g++ 6.2.0)
       
        len_row = A.size();
        if (len_row == 0 ) return 0;
        len_col = A[0].size();
        if (len_col == 0 ) return 0;        
        
        int rt_cnt = 0;
        //   cout<< len_row << len_col <<endl;
        // cout<< 1 <<endl;
        
        int i,j,k,i1,i2;
        for (i=0;i<len_row;i++ )
        {
            for (j=0;j<len_col;j++){
                if ( dfs(A,i,j,A[i][j]) == 1) 
                {
                    rt_cnt++;
                    // cout <<"+1" << i << j<<endl;
                }
                // cout << i << j<<endl;
            }
        }
        
        return rt_cnt;
    }
    
    
    
    
    

