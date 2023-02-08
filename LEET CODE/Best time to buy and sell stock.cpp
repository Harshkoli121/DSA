class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=prices[0];
        int n,profit=0;
        int profit1=0;
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                min=prices[i];
            }else{
                n=prices[i];
                profit1=n-min;
            }
            if(profit1>profit)
            profit=profit1;
        }
        return profit;
     }
      
};
