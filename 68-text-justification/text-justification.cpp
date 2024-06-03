class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n = words.size();
        vector<string> ans;
        int currLen = 0;
        int cntW = 0;
        int j = 0;

        for (int i = 0; i < n; ++i) {
            if (currLen + words[i].length() + cntW <= maxWidth) {
                currLen += words[i].length();
                cntW++;
            } else {
                string temp = "";
                int totalSpaces = maxWidth - currLen;
                int spaces = cntW > 1 ? totalSpaces / (cntW - 1) : totalSpaces;
                int extra = cntW > 1 ? totalSpaces % (cntW - 1) : 0;

                while (j < i) {
                    temp += words[j++];
                    if (j < i) {
                        int space_to_add = spaces + (extra-- > 0 ? 1 : 0);
                        temp += string(space_to_add, ' ');
                        totalSpaces -= space_to_add;
                    }
                }

                if (cntW == 1) {
                    temp += string(totalSpaces, ' ');
                }

                ans.push_back(temp);
                j = i;
                currLen = 0;
                cntW = 0;
                i--;
            }
        }

        string temp = "";
        int len = 0;
        while (j < n) {
            len += words[j].length();
            temp += words[j++];
            if (j < n) {
                temp += " ";
                len++;
            }
        }

        temp += string(maxWidth - len, ' ');
        ans.push_back(temp);

        return ans;
    }
};