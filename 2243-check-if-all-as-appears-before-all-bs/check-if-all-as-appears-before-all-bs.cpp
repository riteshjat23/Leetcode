class Solution {
public:
    bool checkString(string s) 
    {
        int count=0;
        char ch='a';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        for(int i=count;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                return false;
            }
        }
        return true;
       

    }
};