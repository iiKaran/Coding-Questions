class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>= num.size())
        return "0";

       stack<char> st ; 
       for(auto ch : num){
        int dig = int(ch);
        while( k> 0 && st.size()>0 && dig< int(st.top()))
        {
            st.pop(); 
            k--; 
        }
        st.push(dig);
       }
       while(k-- > 0 && st.size() > 0){
        st.pop();
       }
       string ans =""; 
       while(!st.empty()){
        ans += st.top(); 
        st.pop(); 
       }
       reverse(ans.begin(),ans.end());

       while(ans.size()>1 && ans[0]=='0')
       {
        ans = ans.substr(1,ans.size()-1);
       }
       return ans ;
    }
};