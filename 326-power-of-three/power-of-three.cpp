class Solution {
public:
    bool isPowerOfThree(int n) 
    { int count=0;
       long long  store=n;
        while(n!=0)
        {
            if(n%3==0)
            {
                count++;
            }
           
            n=n/3;
        }
        long long ans=1;
        for(int i=0;i<count;i++)
        {
            ans=ans*3;
            
        }
        if(ans==store)
        {
            return true;
        }
        return false;
    }
};