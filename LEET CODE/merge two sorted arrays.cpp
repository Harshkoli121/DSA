class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=0,j=0,k=0;
       vector<int>nums3;
       while(i<m){
           nums3.push_back(nums1[i]);
           i++;
       } 
       while(j<n){
           nums3.push_back(nums2[j]);
           j++;
       }
       sort(nums3.begin(),nums3.end());
       nums1=nums3;
    }
};
