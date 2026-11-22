class Solution {
public:
    string reversePrefix(string word, char ch)
    {
        int n=word.size();
        
       int s=0;
       
       int count=-1;
       for(int i=0;i<n;i++)
       {
        if(word[i]==ch)
        {
            count=i;
            break;
        }

       }
       if(count==-1)
       {
        return word;
       }
       int e=count;
       while(s<e)
       {
        swap(word[s],word[e]);
        s++;
        e--;

       }
       return word;
        
        
    }
};