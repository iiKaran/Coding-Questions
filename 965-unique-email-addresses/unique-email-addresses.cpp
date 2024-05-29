class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
  map<string,int> mp ;
    int cnt=0; 
    for(auto text: emails){
      string atTheRate = "@";
    // Find the position of the atTheRate
    int position = text.find(atTheRate);
    if (position != string::npos) {
        //  found then extract
        string name = text.substr(0,position);
        string domain = text.substr(position);
        
        // work on the name
        int dotPos = name.find("."); 
        while(dotPos != string::npos){
            name = name.erase(dotPos,1);
            dotPos = name.find(".");
        }
        // remove all the dots
        // ignore string after add 
        int plusPos = name.find("+"); 
        if(plusPos != string::npos){
            string modified = name.substr(0,plusPos);
            name= modified;
        }
        string final = name+domain; 
        
        if(mp[final]>=1){
            mp[final]+=1 ; 
        }
        else{
            cnt+=1 ; 
            mp[final]=1 ; 
        }
    }
    }
    return cnt ;
    }
};