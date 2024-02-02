class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg=0, tc=0 , curr=0; 
        int n = gas.size(); 
        int index =0 ; 
        for( int i =0; i< n ; i++)
        {
            tg+= gas[i]; 
            tc+= cost[i]; 

            curr += gas[i]-cost[i]; 
            if(curr< 0)
            {
                curr=0; 
                index= i+1; 
            }
        }
        return  tg>=tc?index:-1 ; 
    }
};