class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        else if(nums[0]!=nums[1]){//the first element is the only/single element
            return nums[0];
        }
        else if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        else{
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                    return nums[mid];
                }

                else if(((mid%2==0) && (nums[mid]==nums[mid+1])) ||((mid%2==1) && nums[mid]==nums[mid-1]) ){
                    low=mid+1;//we are in the left half

                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};