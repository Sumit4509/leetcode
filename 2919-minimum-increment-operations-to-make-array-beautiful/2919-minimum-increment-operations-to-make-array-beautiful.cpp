class Solution {
public:
    long long minIncrementOperations(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]>=k){
                nums[i]=0;
            }else{
                nums[i]=k-nums[i];
            }
        }
        
        long long set=0,last_not=0,last2_not=0;
        set=nums[0];
        
        for(int i=1;i<n;i++){
            long long temp=set;
            set=(long long)nums[i]+min(set,min(last_not,last2_not));
            last2_not=last_not;
            last_not=temp;
        }
        
        
        return min(set,min(last_not,last2_not));
        
    }
};