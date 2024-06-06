class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s== goal) return 1 ; 
        reverse(s.begin(),s.end()); 
        string t = s; 
        
        for( int i =0; i <t.length()-1;i++){
            if(t[i]==goal[0])
            {
                // now reverse
                string rev = t ; 

                reverse(rev.begin(),rev.begin()+i+1); 
                reverse(rev.begin()+i+1,rev.end()); 
                cout<<"rev is "<<rev<<" & goal is "<<goal<<endl; 
                if(rev==goal)
                return true; 
            }
        }
        return false ;
    }
};