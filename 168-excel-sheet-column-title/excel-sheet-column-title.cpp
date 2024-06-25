class Solution {
    string getLet(int num){
        
        if(num == 0)
        return "Z";
        vector<char> alphabet(27);
    // Fill the vector with 'a' to 'z'
    for (int i = 0; i < 26; ++i) {
        alphabet[i] = 'A' + i;
    }
        string tmp=""; 
        tmp += alphabet[num-1];
        return tmp;
    }
public:
    string convertToTitle(int num) {
        string ans ="";
        while(num >0)
        {
            num--; 
            int dig = num%26;
            cout<<dig<<",";
            ans.push_back(dig+'A');
            num /= 26 ;
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};