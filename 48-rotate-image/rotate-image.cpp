class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=r;
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[j][c-1-i]=matrix[i][j];
            }
        }
        matrix=ans;

        
    }
};