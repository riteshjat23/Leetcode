class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        vector<int>store;
        int count=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                store.push_back(count);
                count=1;
            }
        }
        store.push_back(count);
        sort(store.begin(),store.end());
        for(int i=0;i<store.size()-1;i++)
        {
            if(store[i]==store[i+1])
            {
                return false;
            }
        }
        return true;
     
        
    }
};