class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int r=accounts.size();
        int c=accounts[0].size();
        int sum=0;
        int max=-1;
        for(int i=0;i<r*c;i++)
        {
            if(i%c==0)
            {
                sum=0;
            }
            sum=sum+accounts[i/c][i%c];
            if(sum>max)
            {
                max=sum;

            }
        }
        return max;
        
    }
};