class Solution {
public:
    int mySqrt(int x) {
      long int low=1;
        while(low*low<=x){
            low++;
        }
        return low-1;
    }
};
