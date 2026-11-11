class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count==n)
        {
            vector<int>store(n+1,0);
            store[0]=1;
            return store;
        }
        for(int i=0;i<count;i++)
        {
            digits[n-1-i]=0;
        }
        digits[n-1-count]=digits[n-1-count]+1;
        return digits;
        
        
    }
};