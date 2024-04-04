#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::vector<int> result;

        // Mark numbers as negative
        for (int i = 0; i < nums.size(); ++i) {
            int index = std::abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Find positive numbers, which indicate missing numbers
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};
