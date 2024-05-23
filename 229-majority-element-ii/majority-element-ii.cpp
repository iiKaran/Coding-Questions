class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans ;
         
         int candidate1 , candidate2 ; 
         candidate1= candidate2=INT_MIN ; 
         int vote1,vote2 ; 
         vote1= vote2 = 0 ; 

         // 
         for(auto element : nums){
            if(element== candidate1){
                vote1+=1 ; 
            }
            else if(vote1==0 && element != candidate2)
            {
                vote1+=1 ; 
                candidate1= element ; 
            }
            
           else if(element== candidate2){
                vote2+=1 ; 
            }
           else if(vote2==0 && element!= candidate1)
            {
                vote2+=1 ; 
                candidate2=element ; 
            }
            
            else{
               if(element!= candidate1)
               vote1--; 
                if(element != candidate2)
               vote2--; 

               
            }

         }
         int cnt1 , cnt2;
         cnt1=cnt2=0; 
         for( auto elem : nums){
            if(elem==candidate1){
                cnt1++; 
            }
            if(elem==candidate2){
                cnt2++; 
            }
         }
         int n = nums.size(); 
         if(cnt1> n/3){
            ans.push_back(candidate1); 
            }
         if(cnt2>n/3){
             ans.push_back(candidate2); 
         }
        sort(ans.begin(),ans.end());
        return ans ; 
    }
};