class Solution {
public:
    int minimumCost(std::vector<int>& nums) {
        int ans = nums[0];
        int min1 = INT_MAX;
        int min2 = nums[1];
        int n = nums.size();
        auto min1Iter = nums.begin();

        for (auto it = nums.begin() + 1; it != nums.end(); ++it) {
            if (*it < min1) {
                min2 = min1;
                min1 = *it;
                min1Iter = it;
            } else if (*it < min2) {
                min2 = *it;
            }
        }

        nums.erase(min1Iter);

        ans += min1 + min2;
        return ans;
    }
};