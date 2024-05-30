class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;

        for(int i =0; i < nums1.size(); i++){
            mp[nums1[i]]= i ; 
        }
        // move through the nums1 and find index in nums 
        vector<int> nextGreat(nums2.size(),0); 
        vector<int> ans(nums1.size(),0);
        stack<int> st ; 
        for(int i = nums2.size()-1; i>=0; i--){
            if(st.empty())
            {
                nextGreat[i]=-1 ; 
                  st.push(nums2[i]);
                continue ;
            }
            while(!st.empty() && st.top()<=nums2[i]){
            st.pop(); 
            }
            if(st.empty()){
            nextGreat[i]= -1 ; 
            }

            else{
                nextGreat[i]= st.top();
            }

            st.push(nums2[i]);
        }

         for(int i =0; i < nums2.size(); i++){
            cout<< nextGreat[i];
         }
         cout<<endl; 
        // now keep only that in n1 
        
        for(int i =0; i < nums2.size(); i++){
            if(mp.find(nums2[i])!= mp.end()){
                ans[mp[nums2[i]]]= nextGreat[i];
            }
        }
        return ans ; 
        
    }
};