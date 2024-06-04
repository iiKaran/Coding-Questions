#include<bits/stdc++.h>
class Solution {
 std::string expandAroundCenter(const std::string& s, int left, int right, int n) {
    // Expand while characters are equal and within bounds
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }

    // Construct the palindromic substring without using substr
    std::string palindrome = "";
    for (int i = left + 1; i < right; i++) {
        palindrome += s[i];
    }

    return palindrome;
}

std::string expandMid(int ind, const std::string& s, int n) {
    // Get the longest palindrome with single center
    std::string oddPalindrome = expandAroundCenter(s, ind, ind, n);

    // Get the longest palindrome with double center
    std::string evenPalindrome = expandAroundCenter(s, ind, ind + 1, n);

    // Return the longer palindrome
    return (oddPalindrome.length() > evenPalindrome.length()) ? oddPalindrome : evenPalindrome;
}

public:
    string longestPalindrome(string s) {
        int n = s.length();
        string ans= "";
        int maxLength=0; 
        for(int i=0; i < n; i++){

            string plain = expandMid(i , s , n); 

            if(maxLength< plain.length()){
                cout<<"pos"<<ans;
                ans = plain ; 
                maxLength= plain.length(); 
            }
        }
        return ans ; 
    }
};