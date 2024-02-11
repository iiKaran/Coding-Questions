class Solution {
    int binarySearch(int s , int e, vector<int> & arr,int target)
    {
            

        int mid= (s +(e-s)/2) ; 

        while(s<=e)
        {
            mid= (s +(e-s)/2);
            if(arr[mid]== target)
            {
                   return mid ; 
            }
            else if(arr[mid]<target)
            {
                s=mid+1 ; 
            }
            else 
            e= mid-1 ; 
        }
        return -1; 
    }
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans ; 
        for( int i =0; i < arr.size()-1; i++)
        {
            int newTarget = target - arr[i]; 
            
            int rest = binarySearch(i+1 ,arr.size()-1,arr, newTarget); 

            if(rest != -1)
            {
               return {i+1,rest+1};
            }
        }
        return ans ;
    }
};