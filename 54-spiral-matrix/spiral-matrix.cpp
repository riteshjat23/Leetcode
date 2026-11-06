class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        int rowmin=0;
        int rowmax=r-1;
        int colmin=0;
        int colmax=c-1;
        int total=r*c;
        int count =0;
        vector<int>ans;
        while(count<total)
        {
            //store row
            for(int i=colmin;count<total && i<=colmax;i++)
            {
                ans.push_back(matrix[rowmin][i]);
                count++;

            }
            rowmin++;
            //store coloum
            for(int i=rowmin;count<total && i<=rowmax;i++)
            {
                ans.push_back(matrix[i][colmax]);
                count++;
            }
            colmax--;
            for(int i=colmax;count<total && i>=colmin;i--)
            {
                ans.push_back(matrix[rowmax][i]);
                count++;
            }
            rowmax--;
            for(int i=rowmax; count<total  && i>=rowmin;i--)
            {
                ans.push_back(matrix[i][colmin]);
                count++;
            }
            colmin++;

        }
        return ans;
    }
};