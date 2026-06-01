class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice = INT_MAX;
        int profit;
        //we are moving forward in the array so the caseof buying later and selling earlier is not possible
        for(int i=0;i<prices.size();i++){
            //taking the min price
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            //calculating profit
            profit=prices[i]-minprice;
            //calculating maxprofit
            if(profit>maxprofit){
                maxprofit=profit;
            }
        }
        return maxprofit;
        
    }
};