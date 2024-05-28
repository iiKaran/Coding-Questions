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
            int window=0; 
            int start = 0;
            int sum =0;  
            while(window< abs(k)){
                window+=1; 
                if(start==0)
                start = n;   

                start--; 
                cout<<"elem"<<code[start]<<endl; 
                sum +=code[start];
            }
            
            int l = 0 ; 
            int r = start; 
cout<<"sum is "<<r<<endl; 
            while(l< n){
                ans[l]= sum ; 
                sum+= code[l++];
                sum -= code[r]; 
                r= (r+1)%n; 
            }
            return ans ; 

        }
    }
}; 