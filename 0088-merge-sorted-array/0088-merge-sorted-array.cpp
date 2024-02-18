class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int start = m;
      for(int i=0;i<n;i++){
          nums1[start]=nums2[i];
          start ++;
      }
    sort(nums1.begin(), nums1.end());
    }
};