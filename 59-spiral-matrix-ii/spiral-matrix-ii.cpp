class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int rowmin=0,rowmax=n-1,colmin=0,colmax=n-1;
        int total=n*n;
        int count=0;
        while(count<total)
        {
            for(int i=colmin;count<total && i<=colmax;i++)
            {
                ans[rowmin][i]=count+1;
                count++;
            }
            rowmin++;
            for(int i=rowmin;count<total && i<=rowmax;i++)
            {
                ans[i][colmax]=count+1;
                count++;
            }
            colmax--;
            for(int i=colmax;count<total &&i>=colmin;i--)
            {
                ans[rowmax][i]=count+1;
                count++;
            }
            rowmax--;
            for(int i=rowmax; count<total && i>=rowmin;i--)
            {
                ans[i][colmin]=count+1;
                count++;
            }
            colmin++;

        }
        return ans;
        
        
    }
};