// problem link: https://leetcode.com/problems/valid-palindrome-ii/
class Solution {
public:
    
    bool isPalindrome(string s, int start, int end) {
        while(start<end) {
            if(s[start]==s[end]) {
                start++;
                end--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start < end) {
            if(s[start] == s[end]) {
                start++;
                end--;
            }
            else {
                // deleting left element or right element to check which gives palindrome
                return isPalindrome(s,start+1,end) || isPalindrome(s,start,end-1);
            }
        }
        return true;
    }
};
