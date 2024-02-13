class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
           for(int j=i+1;j<words.size();j++)
           {
               string ans=words[j];
               reverse(ans.begin(),ans.end());
               if(words[i]==ans)
               {
                   count++;
               }
           }
        }
        return count;
    }
};