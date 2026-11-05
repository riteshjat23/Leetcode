class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image)
     {
        int r=image.size();
        int c=image[0].size();
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][c-j-1]=image[i][j];
                 if(ans[i][c-j-1]==0)
                 {
                    ans[i][c-j-1]=1;
                     
                 }
                else
                 {
                    ans[i][c-j-1]=0;
                    
                 }
            }
            
        }  
        
          return ans;  
    }
};