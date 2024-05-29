class Solution {
    int sumFind(vector<int> &nums, int n , int div){
        int result =0; 
        for( int i=0; i <n;i++){
            int division_result= int(ceil(double(nums[i]) / double(div))); 
            result+= division_result ;
        }
        return result;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    
      int n = nums.size();
      // inc 
      sort(nums.begin(),nums.end());
      int maxi = nums[n-1];
      int ans= maxi ; 
      int mini= INT_MAX ;
      int l , r , mid ;
      l=1 , r= maxi; 

      while(l<=r){
        mid = (l+r)/2 ; 
        int summi =sumFind(nums,n,mid);
        if(summi<=threshold){
            cout<<"mid= "<<mid<<" sumi "<<summi<<endl;
            // if(summi<)
            ans = mid ; 
            r= mid-1; 
            // return ans ;
        }
        else{
            l = mid+1 ; 
        }
      }
      return ans ;   
    }
};