class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int f, s;
        f=s=0; 
        
        do{
            f=nums[nums[f]]; 
            s=nums[s];
        }while(f!=s);

        s=0;
        while(f!=s){
            f=nums[f]; 
            s= nums[s];
        }
        return s;
    }
};