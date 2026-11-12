class Solution {
public:
    int mySqrt(int x)
    {
        long long s=0;
        long long e=x;
        long long mid=s+(e-s)/2;
        while(s<=e)
        {
            mid=s+(e-s)/2;
           long long  a=mid*mid;
           long long  b=(mid+1)*(mid+1);
           
            if(a<=x && b>x)
            {
                return mid;
               
            }
             else if(a >=x )
            {
                e=mid-1;

             }
             else
             {
                s=mid+1;
             }

        }  
            return 0;
        
    }
};