class Solution {
public:
    int searchInsert(vector<int>& nums, int target)  {
        
        int size=nums.size();
        int s=0;
        int e=size-1;
        int ans=-1;
        int mid=s+(e-s)/2;
      while(s<=e)
      {
        mid=s+(e-s)/2;
        
        if(nums[mid]==target)
        {
        
            return mid;
        }
        else if(nums[mid]>target)
        {
            e=mid-1;

        }
        else
        {
            s=mid+1;
        }
      }
       if(nums[mid]>target)
       {
        return mid;
       }
       else
       {
        return mid+1;
       }
    
        
    }
};