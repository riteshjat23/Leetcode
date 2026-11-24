class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        int n=nums.size();
        int arr[1000000]={0};
        for(int i=0;i<n;i++)
        {
            //int ans=nums[i];
            arr[nums[i]]++;

        }
        vector<int>store;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==2)
            {
                store.push_back(i);
            }
        }
        return store;
    }
};