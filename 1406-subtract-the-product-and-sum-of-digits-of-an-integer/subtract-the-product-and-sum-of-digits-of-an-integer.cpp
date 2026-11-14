class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        long long dot=1;
        long long sum=0;
        while(n!=0)
        {
           int y=n%10;
           dot=dot*y;
           sum=sum+y;
           n=n/10;

        }
        return dot-sum;
        
    }
};