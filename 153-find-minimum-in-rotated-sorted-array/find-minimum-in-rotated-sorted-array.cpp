class Solution {
public:
    int findMin(vector<int>& nums) {
        int lb=0;
        int ub=nums.size()-1;
        int ans=INT_MAX;
        while(lb<=ub){
            int mid=lb+(ub-lb)/2;
            if(nums[lb]<=nums[mid]){
                ans=min(ans,nums[lb]);
            lb=mid+1;
            }
            else{
                if(nums[mid]<=nums[ub]){
                    ans=min(ans,nums[mid]);
                    ub=mid-1;
                }
            }
        }
        return ans;
     
    }
};