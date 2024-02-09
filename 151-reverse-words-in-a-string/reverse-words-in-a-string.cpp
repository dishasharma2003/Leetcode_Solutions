class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        string result = "";
        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i >= n) {
                break; // We've reached the end of the string, exit the loop
            }
            int j = i + 1;
            while (j < n && s[j] != ' ') {
                j++;
            }
            string w = s.substr(i, j - i);
            if (result.empty()) {
                result = w;
            } else {
                result = w + " " + result;
            }
            i = j + 1;
        }
        return result;
    }
};
