class Solution {
  int solve( int index , vector<int> & prices , int buy ,int n)
  {
      if(index>n-1)
      return 0; 

      int maxi= 0; 
        int sell = 0 ; 
     
      if(prices[index] > buy)
      sell= (prices[index]-buy)+solve(index+1, prices, prices[index], n); 
      
      
      int notsell=solve(index+1 , prices, buy, n); 
    
      

      maxi= max(sell ,notsell); 
      return maxi ; 
  }
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