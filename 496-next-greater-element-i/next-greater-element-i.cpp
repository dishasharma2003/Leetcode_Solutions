#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;
        
        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Pop elements from stack smaller than current element
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            // If there is a next greater element, store it in map
            if (!st.empty()) {
                nextGreater[nums2[i]] = st.top();
            }
            // Push current element into stack
            st.push(nums2[i]);
        }
        
        vector<int> result;
        // For each element in nums1, find its next greater element
        for (int num : nums1) {
            // If next greater element exists, push it into result vector
            if (nextGreater.find(num) != nextGreater.end()) {
                result.push_back(nextGreater[num]);
            } else {
                result.push_back(-1); // If no next greater element, push -1
            }
        }
        
        return result;
    }
};
