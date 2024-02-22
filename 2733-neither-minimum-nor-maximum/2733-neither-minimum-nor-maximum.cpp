class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return -1;
        }

        int mini = INT_MAX, maxi = INT_MIN;
        for(auto it : nums){
            mini = min(mini, it);
            maxi = max(maxi, it);
        }

        for(auto it : nums){
            if(it!=mini && it!=maxi){
                return it;
            }
        }
        
        return -1;
    }
};