class Solution {
public:
    int countPrimes(int n)
    {
       if(n<=2)
       {
        return 0;
       }
        int cnt=0;
        vector<bool>prime(n,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<n;i++)
        {  // bool x=prime[x];
            if(prime[i])
            {
                  cnt++;
                for(long long  j=1LL*i*i;j<n;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
         return cnt;

        
    }
};