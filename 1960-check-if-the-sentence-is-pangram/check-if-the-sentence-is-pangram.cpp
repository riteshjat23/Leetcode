class Solution {
public:
    bool checkIfPangram(string sentence)
   {
    int arr[26]={0}; 
    for(int i=0;i<sentence.size();i++)
    {
        char ch=sentence[i];
        int x=ch-'a';
        arr[x]++;
    }
    for(int i=0;i<=25;i++)
    {
        if(arr[i]==0)
        {
            return false;
        }
    }
    return true;

   }
};