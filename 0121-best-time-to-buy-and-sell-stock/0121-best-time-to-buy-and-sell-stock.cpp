class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= prices[0];
        int maxProfit=0;
        for (int i=0; i<prices.size(); i++){
        
            if(prices[i]<min){
                //calculate profit 
                min= prices[i];            
        }
            else{
               int profit= prices[i]-min;
                if(profit>maxProfit){
                    maxProfit= profit;
                }
            }
        }
        return maxProfit;
    }
};