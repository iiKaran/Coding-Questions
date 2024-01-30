class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxi = 0 ; 
       int buy=  prices[0]; 
    

       int n = prices.size(); 
       
       int i=0; 
       while(i < n)
       {
            if(prices[i]>= buy)
            {
                // yes profit 
                int profit=(prices[i]-buy); 
                if(profit> maxi)
                 maxi= profit; 
            }
            else{
                // no profit 
                if(prices[i]<buy)
                buy= prices[i]; 
            }
            i++; 
       }
       return maxi ; 


    }
};