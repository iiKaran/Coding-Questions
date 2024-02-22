class Solution {
public:
    vector<int> twoSum(vector<int> a, int target) {
        int i,j,k,l,m,n;
        map<int,int>mymap;
        map<int,int>::iterator it;
        vector<int>ans;
        for(i=0;i<a.size();i++){
            it=mymap.find(target-a[i]);
                if(it!=mymap.end()){
                     ans.push_back(it->second);
                     ans.push_back(i);
                     return ans;
                }
            else{
                mymap.insert(make_pair(a[i],i));
            }
        }
        return ans ;
    }
};