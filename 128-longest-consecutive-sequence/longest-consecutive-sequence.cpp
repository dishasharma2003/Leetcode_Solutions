#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        std::unordered_set<int> hash(nums.begin(), nums.end());
        int maxCount = 1;

        for (int num : nums) {
            if (hash.find(num - 1) == hash.end()) {
                // Start of a new sequence, explore consecutive elements
                int currentNum = num;
                int count = 1;

                while (hash.find(currentNum + 1) != hash.end()) {
                    count++;
                    currentNum++;
                }

              
                maxCount = std::max(maxCount, count);
            }
        }

        return maxCount;
    }
};
