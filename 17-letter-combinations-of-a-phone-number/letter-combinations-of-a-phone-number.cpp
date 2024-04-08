#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Base case: if the input string is empty, return an empty vector
        if (digits.empty()) {
            return {};
        }
        
        // Mapping of digits to letters
        vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        // Initialize the result vector to store letter combinations
        vector<string> result;
        // Call DFS traversal starting from index 0 with an empty string to build combinations
        DFS(digits, 0, "", keypad, result);
        // Return the result vector
        return result;
    }

private:
    // Helper function for DFS traversal to build letter combinations
    void DFS(const string& digits, int index, string combination, const vector<string>& keypad, vector<string>& result) {
        // Base case: if index reaches the end of digits string, add the combination to the result vector
        if (index == digits.size()) {
            result.push_back(combination);
            return;
        }
        
        // Get the characters corresponding to the current digit
        string letters = keypad[digits[index] - '0'];
        // Iterate through each character and recursively call DFS for the next digit
        for (char letter : letters) {
            // Append the current letter to the combination
            combination.push_back(letter);
            // Recursive call for the next digit
            DFS(digits, index + 1, combination, keypad, result);
            // Backtrack: remove the last added letter to try other possibilities
            combination.pop_back();
        }
    }
};
