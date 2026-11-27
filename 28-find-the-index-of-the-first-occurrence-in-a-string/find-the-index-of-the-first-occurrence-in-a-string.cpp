class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int count=0;
        int n=needle.size();
        if(haystack.size()<needle.size())
        {
            return -1;
        }
        for(int i=0;i<haystack.size();i++)
        {    count=0;
            for(int j=0;j<n;j++)
            {
                if(haystack[i+count]==needle[j])
                {
                    count++;
                    
                }
            }
                     if(count==n)
                    {
                        return i;
                    }
                    
        }
        return -1;
        
    }
};