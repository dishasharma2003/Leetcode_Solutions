class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lb=0;
        int ub=nums.size()-1;
        while(lb<=ub){
            int mid=lb+(ub-lb)/2;
            if(nums[mid]==target){
                return true;
            }
         if((nums[lb]==nums[mid]) && (nums[mid]==nums[ub])){
                lb=lb+1;
                ub=ub-1;
                continue;  //SHRINKING THE ARRAY IN CASE OF SAME ELEMENTS ON LEFT SIDE AND RIGHT SIDE
            }
            else if(nums[lb]<=nums[mid]){
                if(nums[lb]<=target && target<=nums[mid]){
                    ub=mid-1;
                }
             
                else{
                    lb=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[ub]){
                    lb=mid+1;
                }
                else{
                    ub=mid-1;
                }
            }
        }
        return false;
        
    }
};