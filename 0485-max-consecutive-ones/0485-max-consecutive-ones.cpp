class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int max_one = INT_MIN;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1){
                count++;
                max_one = max(max_one, count);
            } else {
                count = 0;
            }
        }

        if(max_one == INT_MIN)
            return 0;
        else
            return max_one;
        
    }
};