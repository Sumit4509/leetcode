class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        float count;
        for(int i=0 ;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0 ;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==1){
            return ans[0];
        }
        if (ans.size()%2){
             count = ans.size()/2 ;
            return ans[count];
    } 
    else{count = ans.size()/2;
            float s=(ans[count--]+ans[count])/ float(2);
            return s;
        }
    
       return 1;
    }
};