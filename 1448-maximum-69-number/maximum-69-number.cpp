class Solution {
public:
    int maximum69Number (int num) 
    {
      long long ans=0;
      vector<int>store;
      while(num!=0)
      {
        long long y=num%10;
        store.push_back(y);
        num=num/10;
      }
       int n=store.size();
       for(int i=n-1;i>=0;i--)
       {
        if(store[i]==6)
        {
            store[i]=9;
            break;

        }
       }
       for(int i=n-1;i>=0;i--)
       {  
            ans=ans*10+store[i];
          
       }
    
      return ans;
        
    }
};