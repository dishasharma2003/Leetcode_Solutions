#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        
        for (int i = 0; i < s.length(); i++) {
            int currentValue = romanValues[s[i]];
            
            if (i < s.length() - 1) {
                int nextValue = romanValues[s[i + 1]];
                
                if (currentValue < nextValue) {
                    result += (nextValue - currentValue);
                    i++;  // Skip the next value
                    continue;
                }
            }
            
            result += currentValue;
        }
        
        return result;
    }
};
