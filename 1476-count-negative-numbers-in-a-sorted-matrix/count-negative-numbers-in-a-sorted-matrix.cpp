class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        for(int i=0;i<r*c;i++)
        {
            int x=grid[i/c][i%c];
            if(x<0)
            {
                count++;
            }
        }
        return count;
        
    }
};