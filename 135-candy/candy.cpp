class Solution {
public:
    int candy(vector<int>& rat) {
        int n = rat.size(); 
        vector<int> cand(n ,1); 

        for( int i =1 ; i < n ; i++)
        {
            int currRate = rat[i]; 
            int prevRate= rat[i-1];
            int currCand= cand[i]; 
            int prevCand= cand[i-1]; 
            if(currRate > prevRate && currCand<= prevCand)
            {
              cand[i]++;
              i--; 
            }
        }

         for( int i = n-2 ; i >=0 ; i--)
        {
            int currRate = rat[i]; 
            int nextRate= rat[i+1];
            int currCand= cand[i]; 
            int nextCand= cand[i+1]; 
            if(currRate > nextRate && currCand<= nextCand)
            {
              cand[i]++; 
              i++;
            }
        }
        
        int ans=0; 
        for( int i =0; i < n ; i++)
           ans+= cand[i];

        return ans ; 
    }
};