class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long sum=0;
        int z=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            int y=x%10;
            sum=sum*10+y;
            if(sum > INT_MAX ||
                   (sum == INT_MAX / 10 && y > 7))

           {
          return false;
           }
            x=x/10;
        }
        if(z==sum)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};