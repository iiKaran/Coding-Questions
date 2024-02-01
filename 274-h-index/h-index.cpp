class Solution {

public:
    int hIndex(vector<int>& cit) {
         
         int n = cit.size(); 
         sort(cit.begin(), cit.end());  
         int ans = n ; 
         for( int i=0; i < n ; i++)
         {
             if(cit[i]>= ans)
             break ; 

             ans--; 
         }
         return ans;
        
    }
};