class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size(); 
        int ans=0;
        int buy= prices[0] ; 
    
        for( int i =0; i < n ; i++)
        {
            if(prices[i]>=buy)
            {
            ans += (prices[i]-buy);
            buy = prices[i]; 
            }
            else 
            buy = prices[i];
        }
        return ans;
    }
};