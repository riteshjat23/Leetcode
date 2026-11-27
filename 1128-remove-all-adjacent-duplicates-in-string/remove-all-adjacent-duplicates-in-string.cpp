class Solution {
public:
    string removeDuplicates(string s) 
    {
        string ans;
       for(int i=0;i<s.size();i++)
       {
          if(ans.size()==0|| s[i]!=ans.back())
          {
               ans.push_back(s[i]);
          }
          else
          {
            ans.pop_back();
          }
       }
        return ans;


       

        
    }
};