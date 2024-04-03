#include <string>
#include <unordered_map>
#include <sstream>

class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) {
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;

        std::istringstream iss(s);
        std::string word;
        int i = 0;

        while (iss >> word) {
            if (i == pattern.length()) {
                return false;  // More words than characters
            }

            char ch = pattern[i];

            if (charToWord.find(ch) == charToWord.end() && wordToChar.find(word) == wordToChar.end()) {
                charToWord[ch] = word;
                wordToChar[word] = ch;
            } else {
                if (charToWord[ch] != word || wordToChar[word] != ch) {
                    return false;  // Mismatch in bijection
                }
            }

            i++;
        }

        return i == pattern.length();  // Check if all characters in pattern were mapped to words
    }
};
