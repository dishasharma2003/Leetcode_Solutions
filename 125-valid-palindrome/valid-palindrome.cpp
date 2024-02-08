#include <string>
using namespace std;

class Solution {
public:
    char non_capital(char ch) {
        if((ch >= 'A' && ch <= 'Z')||(ch>=48 && ch<=57 )){
            return ch + ('a' - 'A'); // Use 'a' instead of 'A'
        }
        return ch;
    }

    bool isPalindrome(string s) {
        bool palindrome = true;
        int l = s.length();
        int j = 0;

        for(int i = 0; i < l; i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')||(s[i]>=48 && s[i]<=57 )) {
                s[j++] = non_capital(s[i]);
            }
        }

        l = j; // Update the new length of the modified string

        for(int i = 0; i < l / 2; i++) {
            if(s[i] != s[l - i - 1]) {
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};
