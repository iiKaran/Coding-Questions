class Solution {
public:
    int candy(vector<int>& rating) {
        int n = rating.size(); 
        int i =1; 
        int candy = n ; 
        while(i < n)
        {

             if(rating[i]==rating[i-1])
             {
                 i++; 
                 continue;
             }
             int peak=0 ; // inc trend
             while(rating[i]>rating[i-1])
             {
                 peak++; 
                 i++; 
                 candy += peak ;
                 if(i >= n)
                 return candy ; 
             }
             int dip=0 ; //dec trend

             while( i <n && rating[i]<rating[i-1])
             {

                 dip ++; 
                 candy+= dip ;
                 i++;
             }

             candy-= min(dip,peak);
        } 
        return candy ; 
    }
};