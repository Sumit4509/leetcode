class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans=0;
        int count =0;
        for (int i=0 ;i<nums.size();i++){
            if(nums[i]%3==0 && nums[i]%2==0){
                count ++;
                ans+=nums[i];
            }
        }
        if(count ==0){
            return 0;
        }
        int ans1= ans/count;
        return ans1;
        
    }
};