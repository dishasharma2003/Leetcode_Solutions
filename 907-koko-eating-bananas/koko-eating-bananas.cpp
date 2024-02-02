#include <iostream>
#include <vector>
#include <algorithm> // for std::max_element
#include <cmath>


class Solution {
public:
    long long totalhours;

    long long total_hours(const std::vector<int>& piles, int mid) {
        totalhours = 0; // Initialize totalhours to zero for each call
        for (int i = 0; i < piles.size(); i++) {
            totalhours += std::ceil(static_cast<double>(piles[i]) / mid);
        }
        return totalhours;
    }

    int minEatingSpeed(std::vector<int>& piles, int h) {
        long long low = 1;
        long long ans = INT_MAX;

        long long  high = *std::max_element(piles.begin(), piles.end());

        while (low <= high) {
            long long  mid = low + (high - low) / 2;
           
            long long  hours = total_hours(piles, mid);
            if (hours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return static_cast<int>(ans); // Convert ans to int before returning
    }
};