class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans ;

        sort(nums1.begin(), nums1.end()); 
        sort(nums2.begin (), nums2.end()); 

        // now iterate to make  ans 

        int first , second,size1 , size2;
        first=second=0; 
        size1=nums1.size(),size2 = nums2.size();

        // iterate over the arrays 

        while(first<size1 && second< size2){
            if(nums1[first]<nums2[second]){
                first++; 
            }
            else if(nums1[first]>nums2[second]){
                second+=1 ; 
            }
            else{
                // equal 
                
                if(ans.size()>0 && nums1[first] != ans.back())
                {
                    ans.push_back(nums1[first]); 
                }
                else if(ans.size()==0)
                {
                    ans.push_back(nums1[first]); 
                }
                first+=1 ; 
                second+=1 ;
            }
        }


        return ans ; 
    }
};