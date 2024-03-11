class Solution {
public:
    int solve(int i, int j ,vector<int>&pattern, vector<int>&nums, vector<vector<int>>&dp){
        if(j == pattern.size()) return 1;
        if(i == nums.size()-1) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        if((pattern[j] == 0 && nums[i] == nums[i+1]) || 
           (pattern[j] == 1 && nums[i] < nums[i+1]) || 
           (pattern[j] == -1 && nums[i] > nums[i+1]))
           return dp[i][j] = solve(i+1, j+1,  pattern, nums, dp);
        
        return dp[i][j] = 0;
    }
    
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int count = 0;
        vector<vector<int>>dp(nums.size(), vector<int>(pattern.size(), -1));
        int n = nums.size();
        for(int i = 0; i<n; i++){
            count += solve(i, 0,  pattern, nums, dp);
        }
        return count;
    }
};