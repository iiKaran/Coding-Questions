class Solution {
public:
    
    bool isPossible(vector<int>& A, unordered_map<int, int> freq, int x) {
        int pending = A.size();
        for (int i: A) {
            if (freq.find(i + x) != freq.end()) {
                freq[i+x]--;
                if (freq[i+x] == 0) {
                    freq.erase(i+x);
                }
                pending--;
            } 
        }
        return pending == 2;
    }
    
    int minimumAddedInteger(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> freq;
        for (int i: B) {
            freq[i]++;
        }
        for (int i = -1001; i <= 1000; i++) {
            if (isPossible(A, freq, i)) {
                return i;
            }
        }
        return INT_MIN;
    }
};