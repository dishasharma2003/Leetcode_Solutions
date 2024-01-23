class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;

             int lb = 0;
        int ub = nums.size() - 1;
        while(lb<=ub){
            int mid = lb + (ub - lb) / 2;
            if (nums[mid] == target){
              if ((mid - 1) >= 0 && nums[mid - 1] == target) {
                    ub = mid - 1;
                }
                else{
                  
                    v.push_back(mid);
                    break;
                
               }
        }
        else if (nums[mid] < target) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }


        }

        lb = 0;
         ub = nums.size() - 1;

        while (lb <= ub) {
            int mid = lb + (ub - lb) / 2;

            if (nums[mid] == target) {
                if ((mid + 1) < nums.size() && nums[mid + 1] == target) {
                    lb = mid + 1;
                } else {
                    v.push_back(mid);
                    break;
                }
            } 
            else if (nums[mid] < target) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }


        if (v.empty()) {
            return {-1, -1};
        
        }

        return v;
    }
};
