class Solution {
    int dp[101][101];
    bool solve(string &s1, string &s2, string &s3,int i,int j)
    {
        if(i == s1.length() && j == s2.length() && i+j == s3.length()) return true;

        if(dp[i][j] != -1) return dp[i][j];

        bool result = false;
        
        if(i < s1.length() && j < s2.length() && s1[i] == s3[i+j] && s2[j] == s3[i+j])
        {
            result = (solve(s1,s2,s3,i+1,j) || solve(s1,s2,s3,i,j+1));
        }
        else if(i < s1.length() && s1[i] == s3[i+j])
        {
            result = solve(s1,s2,s3,i+1,j);
        }
        else if(j < s2.length() && s2[j] == s3[i+j])
        {
            result = solve(s1,s2,s3,i,j+1);
        }
        return dp[i][j] = result;
    }
public:
    bool isInterleave(string s1, string s2, string s3) 
    {
      if(s1.length() + s2.length() != s3.length()) return false;
      memset(dp,-1,sizeof(dp));
      return solve(s1,s2,s3,0,0);
    }
};