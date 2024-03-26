class Solution {
public:

   string repeat(string str,int times){
        string result="";
        for(int i=0;i<times;i++) result += str;
        return result;
    }


string solve(string s){
  string ans = "";
  stack<int> num;
  stack<string> str;
  int n = s.size();
  for(int i = 0; i < n; i++){
    if(s[i] >= '0' && s[i] <= '9'){
     int cnt = 0;
      while(s[i] >= '0' && s[i] <= '9'){
        cnt = cnt * 10 + (s[i] - '0');
        i++;
      }
      num.push(cnt);
      i--; 
    }
    
    else if(s[i] != ']') str.push(string(1, s[i]));
    else{
      string temp = "";
      while(!str.empty() && str.top() != "["){
        temp += str.top();
        str.pop();
      }
      str.pop();
      int a;
      if(num.empty()) a = 1;
      else{
        a = num.top();
        num.pop();
      }
     string temp1 = repeat(temp, a);
     str.push(temp1);
    }
  }

  while(!str.empty()){
    ans += str.top();
    str.pop();
  }
  reverse(ans.begin(),ans.end());

  return ans;
}

    string decodeString(string s) {
        return solve(s);
    }
};