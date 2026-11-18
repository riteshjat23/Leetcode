class Solution {
public:
    int xorOperation(int n, int start) 
    {   int z=start;
        int nums[n];
        int xorr=0;
        for(int i=0;i<n;i++)
        {
            nums[i]=z+2*i;
            xorr=nums[i]^xorr;
        }
        return xorr;
        
    }
};