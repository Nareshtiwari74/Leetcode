class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit=0;
        // int small=0;
        // int count=0;
        // int max=0;
        // int x=0;
        // int n=prices.size();
        // for(int i=n-1;i>=1;i--){
        //     if(prices[i]<prices[i-1]){
        //         count++;
        //     }
        //     else if(prices[i]>=prices[i-1]){
        //         small=prices[i-1];
        //         x=i-1;
        //     }
        // }
        // if(count<=0){
        //     return 0;
        // }
        // for(int i=x;i<n;i++){
        //     if(max<prices[i]){
        //         max=prices[i];
        //     }
        // }
        
        
        //     return max-small;
        
      int small = INT_MAX;
        int maxProfit = 0;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            if (prices[i] < small) {
                small = prices[i];
            }
            else {
                maxProfit = std::max(maxProfit, prices[i] - small);
            }
        }

        return maxProfit;
    }
};