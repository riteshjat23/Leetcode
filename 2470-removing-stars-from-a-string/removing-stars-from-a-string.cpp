class Solution {
public:
    string removeStars(string s) 
    {
        string store;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                store.pop_back();

            }
            else
            {
                store.push_back(s[i]);
            }
        }
        return store;
        
    }
};