#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size() + 1, 0); // Frequency array to count occurrences of each number
        vector<int> result(2); // Vector to store the result
        
        // Count the occurrences of each number in nums
        for (int num : nums) {
            freq[num]++;
        }
        
        // Find the number that occurs twice and the missing number
        for (int i = 1; i <= nums.size(); i++) {
            if (freq[i] == 2) {
                result[0] = i; // Number that occurs twice
            }
            if (freq[i] == 0) {
                result[1] = i; // Missing number
            }
        }
        
        return result;
    }
};
