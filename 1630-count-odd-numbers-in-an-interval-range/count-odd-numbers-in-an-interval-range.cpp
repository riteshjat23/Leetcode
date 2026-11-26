class Solution {
public:
    int countOdds(int low, int high)
    { 
         //return (high + 1) / 2 - low / 2;
         int ans;
         int sub;
        if(low%2!=0 && high%2!=0||  low%2==0 && high%2!=0 || low%2!=0 && high%2==0)
        {
            sub =high-low;
            sub=sub/2+1;
        }
        else                      //if(low%2==0 && high%2==0)
         {
            sub=high-low;
            sub=sub/2;
         }
         return sub;
        
    }
};