#include <vector>
#include <unordered_set>

class Solution {
public:
    int distributeCandies(std::vector<int>& candyType) {
        std::unordered_set<int> uniqueCandies;
        
        // Iterate through the candy types and add them to the set
        for (int candy : candyType) {
            uniqueCandies.insert(candy);
        }
        
        // Return the minimum of half of the total candies and the number of unique candies
        return std::min(uniqueCandies.size(), candyType.size() / 2);
    }
};
