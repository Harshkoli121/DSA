class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int>sum; 
       for(int a:nums){
       sum[a]++;

       }
       int sum1=0;
       for(int a:nums){
           if(sum[a]==1){
           sum1+=a;
           }
       }

return sum1;
    }
};
