class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit =0; 
        int n = prices.size();
        int buy = prices[0]; 
        for(int i=0; i <n;i++){
            if(prices[i]>buy)
            {
                int profit = prices[i]-buy ; 
                max_profit= max(max_profit , profit); 
            }
            else{
                if(prices[i]<buy){
                buy=prices[i]; 
                i--; 
                }
            }
        }
        return max_profit ; 
    }
};