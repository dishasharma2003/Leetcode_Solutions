class Solution {
public:
int give_index(vector<int>& nums,int lb,int ub,int target){
   
    if(lb>ub){
        return -1;
    }
    else{
     int mid=lb+(ub-lb)/2;
     if(nums[mid]==target){
         return mid;

     }
     else if(nums[mid]<target){
         return give_index(nums,mid+1,ub,target); 
     }
     else{
          return give_index(nums,0,mid-1,target);
     }
    }
}
    int search(vector<int>& nums, int target) {
        return give_index(nums,0,nums.size()-1,target);
        
    }
};