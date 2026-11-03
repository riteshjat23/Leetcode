class Solution {
public:
    string defangIPaddr(string address)
     {
        int n=address.size();
        string store="";
        for(int i=0;i<n;i++)
        {
            if(address[i]=='.')
            {
                store.push_back('[');
                store.push_back('.');
                store.push_back(']');

            }
            else
            {
                store.push_back(address[i]);
            }
        }
        return store;
        
    }
};