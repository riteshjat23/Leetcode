class Solution {
public:
    int strStr(string haystack, string needle) 
    { 
         int h=haystack.size();
         int n=needle.size();
         int count=0;
         if(h<n)
         {
            return -1;
         }
         for(int i=0;i<haystack.size();)
         {   
            if(haystack[i]==needle[count])
            {
                count++;
                i++;
                if(count==n)
                {
                    return (i-count);
                }
            }
            else
            {
               i=i-count+1;
               count=0;
            }


         }
         return -1;
        
    }
};