class Solution {
public:
    string validIPAddress(string queryIP) {
        int numberOfDots = 0;
        int numberOfColons = 0;
        for(int i=0;i<queryIP.length();i++){
            if(queryIP[i] == '.') numberOfDots++;
            if(queryIP[i] == ':') numberOfColons++;
        }
        string s = "";
        if(numberOfDots == 3){
            stringstream ss(queryIP);
            while(getline(ss, s, '.')){
                for(int i=0;i<s.length();i++){
                    if(!isdigit(s[i])) return "Neither";
                }
                if(s.length() == 0 || s.length() > 3) return "Neither";
                int temp = stoi(s);
                if(temp < 0 || temp > 255) return "Neither";
                if(s.length() > 1 && s[0] == '0') return "Neither";
            }
            return (s.length() == 0) ? "Neither" : "IPv4";
        }
        else if(numberOfColons == 7){
            s = "";
            stringstream ss(queryIP);
            while(getline(ss, s, ':')){
                if(s.length() > 4 || s.length() == 0) return "Neither";
                for(int i=0;i<s.length();i++){
                    if(isdigit(s[i])) continue;
                    if((s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F')) continue;
                    else return "Neither";
                }
            }
            return (s.length() == 0) ? "Neither" : "IPv6";
        }
        else return "Neither";
    }
};