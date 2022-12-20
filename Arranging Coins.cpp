class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
    int count=n;
    int res;
while(count>=0){
count=count-i;
i++;
        }
        res=i-2;
        return res;
    }
};
