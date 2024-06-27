class Solution {
public:
    void findCombinations(int index, int target, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans) {
        if (index == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Pick up the element
        if (arr[index] <= target) {
            ds.push_back(arr[index]);
            findCombinations(index, target - arr[index], arr, ds, ans);
            ds.pop_back();
        }

        // Move to the next index
        findCombinations(index + 1, target, arr, ds, ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, target, candidates, ds, ans);
        return ans;
    }
};
