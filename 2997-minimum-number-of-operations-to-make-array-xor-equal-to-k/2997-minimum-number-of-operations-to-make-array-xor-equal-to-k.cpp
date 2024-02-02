class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(auto &i: nums){
            k ^= i;
        }
        int ans = 0;
        while(k){
            ans += (k&1);
            k>>=1;
        }
        return ans;
    }
};