class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1=nums1.size();
        int n2=nums2.size();
        int element;
        int count=0;
        vector<int>store;
        for(int i=0;i<n1;i++)
        { count=0;
            int element=nums1[i];
            for(int j=0;j<n2;j++)
            {
                if(element==nums2[j])
                {
                    nums2[j]=-1;
                    count++;
                }
                
            }
            if(count>=1)
            {
                store.push_back(nums1[i]);
            }
        }
        return store;
    }
};