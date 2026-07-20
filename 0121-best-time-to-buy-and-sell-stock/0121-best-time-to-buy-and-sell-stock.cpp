class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int n = prices.size();
        // int profit;
        // int lowprise = INT_MAX;
        // int maxprofit = INT_MIN;
        // int lidx = 0;
        // for (int i = 0; i < n; i++) {
        //     if (lowprise > prices[i]) {
        //         lowprise = prices[i];
        //         lidx = i;
        //     }
        //     if (lidx == n - 1) {
        //         return
        //     }
        //     // lowprise = min(lowprise , prices[i]);
        // }
        // for (int i = lidx + 1; i < n; i++) {
        //     int profit = prices[i] - lowprise;
        //     if (maxprofit < profit) {
        //         maxprofit = profit;
        //     }
        //     // else{
        //     //     return 0;
        //     // }
        //     // maxprofit = max(maxprofit , profit);
        // }
        // return maxprofit;

        int maxprofit = INT_MIN;
        int lowprise = INT_MAX;
        for(int price : prices){
            lowprise = min(lowprise , price);
            maxprofit = max(maxprofit , price - lowprise);
        }
        return maxprofit;
    }
};