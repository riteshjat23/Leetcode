class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        long count =0;
        long long store=n;
        if(n<=0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        while(n!=0)
        {
            if(n%4==0)
            {
                count++;
            }
           
            n=n/4;

        }
        long long ans=1;
        for(int i=0;i<count;i++)
        {
           ans=ans*4;
        }
        if(store==ans)
        {
            return true;
        }
        return false;


        
    }
};