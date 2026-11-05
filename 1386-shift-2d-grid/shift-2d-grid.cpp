class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int r=grid.size();
        int c=grid[0].size();
        k=k%(r*c);
        int a;
        for(int j=0;j<k;j++)
        {  int x=grid[r-1][c-1];
            for(int i=0;i<r*c;i++)
        {   a=grid[i/c][i%c];
            grid[i/c][i%c]=x;
            x=a;   
        } 
        }
        return grid;       
    }
};