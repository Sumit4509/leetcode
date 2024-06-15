class Solution {
    public int majorityElement(int[] nums) {
        HashMap <Integer,Integer> map= new HashMap<>();
        int ans=0;
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i])){
                map.put(nums[i],map.get(nums[i])+1);
            }
            else{
                map.put(nums[i],1);
            }
        }
        for(int keys : map.keySet()){
            if(map.get(keys)>nums.length/2){
                ans= keys;
            }
        }
        return ans;

    }
}