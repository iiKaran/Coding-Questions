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
            for( int i=0; i < n ; i++){
                int sum=0; 
                for( int s=1; s<=k;s++){
                    sum+=code[(i+s)%n];
                }
                ans[i]=sum ;
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