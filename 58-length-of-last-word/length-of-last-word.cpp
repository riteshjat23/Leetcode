class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int n=s.size();
        int store;
        int count=0;
        for(int i=n;i>=0;i--)
        {
            if(s[i]>='A' && s[i]<= 'Z' || s[i]>='a' && s[i]<='z')
            {
                store=i;
                break;

            }
        
        }
        for(int i=store;i>=0;i--)
        {
            if(s[i]>='A' && s[i]<= 'Z' || s[i]>='a' && s[i]<='z')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};