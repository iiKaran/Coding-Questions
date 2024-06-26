class Solution
{
public:
    int ladderLength(string start, string end, vector<string> &words)
    {
        unordered_map<string, bool> mp;
        unordered_set<string> st(words.begin(), words.end()); 
        for (auto word : words)
        {
            mp[word] = true;
        }
        if (mp[end] != true)
            return 0;
        queue<string> q;
        int cnt = 0;
        q.push(start);
        while (!q.empty())
        {
            int size = q.size();
            cnt += 1;
            while (size--)
            {
                string top = q.front();
                q.pop();
                for (int i = 0; i < top.length(); i++)
                {
                    char curr = top[i];
                    for (char ch = 'a'; ch <= 'z'; ch++)
                    {
                        if (ch != curr)
                        {
                            top[i] = ch;
                         
                            if (mp[top] && st.count(top)>0)
                            {
                                   if(top == end)
                                    return cnt+1; 

                                q.push(top);
                                st.erase(top);
                            }
                        }
                    }
                    top[i]= curr ;
                }
            }
            
        }

        return 0;
    }
};