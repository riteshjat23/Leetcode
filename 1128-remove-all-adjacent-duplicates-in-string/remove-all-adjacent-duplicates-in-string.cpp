class Solution {
public:
    string removeDuplicates(string s) 
    {
        int st=0;
        int e=s.size()-1;
        while(st<e)
        {
            if(s[st]==s[st+1])
            {
                s.erase(st,2);
                st=0;
            }

            else
            {
                st++;
            }
        }
        return s;
        
    }
};