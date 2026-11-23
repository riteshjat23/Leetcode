class Solution {
public:
    char repeatedCharacter(string s) 
    {
        int n=s.size();
        char store;
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            int ch=s[i]-'a';
            arr[ch]++;
            if(arr[ch]>=2)
            {   store='a'+ch;
                break;
            }
        }
             
            return store;   
    
        
    }
};