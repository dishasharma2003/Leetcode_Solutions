class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
         int min=prices[0];
       
        for(int i=1;i<prices.size();i++){
           
            int cost=prices[i]-min;
            if(cost>max_profit){
                max_profit=cost;
            }
            if(prices[i]<min){
                min=prices[i];
            }
            
        }
        return max_profit;
        
    }
};