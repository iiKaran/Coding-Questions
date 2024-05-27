class Solution {
    int find_greater(int elem , int n, vector<int>&arr)
    {
        int first_ind= n ; 
        int l , r ; 
        l=0;  r= n-1;
        int mid= (l+r)/2 ;
        while(l<=r)
        {
            mid= (l+r)/2 ;
            if(elem<=arr[mid])
            {
                first_ind= mid; 
                r= mid-1 ; 
            }
            else{
                l =mid+1;
            }
        }
        return n - first_ind ; 
    }
public:
    int specialArray(vector<int>& nums) {
       int n = nums.size(); 
       vector<int> frequency(n+1,0); 

       for( int num:nums){
            frequency[min(num,n)]++; 
            // ans lies in the 1 to n only 
       }
       // now check equality 
       
       int curr_greater = 0 ; 
       for(int ans= n; ans>0; ans--){
            curr_greater += frequency[ans]; 
            if(ans== curr_greater)
            return ans ; 
       }
       return -1 ; 

    }
};