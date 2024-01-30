class Solution {
public:
bool div_possible(vector<int>& nums, int threshold,int mid){
    double sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=ceil(static_cast<double>(nums[i])/mid);
    }
     
    if(sum<=static_cast<double>(threshold)){
        return true;
    }
    return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(div_possible(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
    }
};