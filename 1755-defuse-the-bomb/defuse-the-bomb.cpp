class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        if(k==0){
            vector<int> ans(n,0); 
            return ans ; 
        }
        else if(k > 0){
            vector<int> ans(n,0); 
            int window=0; 
            int sum =0; 
            for( int i =1; window< k && i < n; i = (i+1)%n){
                sum+=code[i]; 
                window+=1 ; 
            }
            // first window sum found
           int l , r ; 
           l =0; r= (l+k)%n ; 
           while(l< n){
              ans[l]= sum ; 
              l++; 
              r= (r+1)%n ; 
              if(l< n){
                sum-=code[l]; 

              }
              sum+= code[r];
           }
            return ans ; 

        }
        else{
            vector<int> ans(n,0); 
            for( int i=0; i < n ; i++){
                int sum=0; 
                int start= i ; 
                int add= 0; 
                while(add< abs(k)){
                    if(start==0){
                        start = n-1 ; 
                    }
                    else{
                        start--; 
                    }
                    sum+=code[start];
                    add++;
                }
                ans[i]=sum ;
            }
            return ans ; 

        }
    }
}; 