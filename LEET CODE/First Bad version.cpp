// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     long  int low=1;
      long int high =n;
    long   int mid,flag=1;
       while(low<high){
           if(isBadVersion(high)==1){
               mid=high-1;
           if(isBadVersion(mid)==1){
               high=(low+high)/2;
           }else{
               low=high;
               flag=high;
           }
       }
           else if(isBadVersion(high)==0){
               low=high;
               high=n;
           }
       }
       return flag;
       } 
    
};
