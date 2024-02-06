class Solution {

    void formLps( vector<int> & lps, int n,string pat)
    {
      lps[0]=0;

      int i=1, length=0; 
      while( i < n)
      {
          if(pat[i]==pat[length])
          {
              length++; 
              lps[i]= length; 
              i++; 
          }
          else{
              if(length !=0)
              {
                  cout<<"g";
                 length= lps[length-1]; 
              }
              else{
                  lps[i]=0; 
                  i++; 
              }
          }
      }

      return ;  
    }
public:
    int strStr(string src, string pat) {
        
        int m = pat.size(),n = src.size(), i=0, j =0 ; 
        vector<int> lps(m); 
        formLps(lps, m , pat); 
        // lps bngya 
        while( i<n)
        { 
            if(j>=m)
            {
                return i-m; 
            }
            if(pat[j]==src[i])
            {
                i++; 
                j++; 
            }
            else
            {
                if(j!=0)
                j = lps[j-1]; 
                else 
                i++; 
            }
        }

        return (j>= m? i-m: -1) ; 
    }
};