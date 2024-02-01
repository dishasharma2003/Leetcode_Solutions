class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int missing_number=arr[mid]-(mid+1);
            if(missing_number<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return (high+1+k);
        
    }
};