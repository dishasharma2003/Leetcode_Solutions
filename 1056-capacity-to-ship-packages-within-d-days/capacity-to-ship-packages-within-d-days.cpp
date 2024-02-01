class Solution {
public:
bool isPossible(vector<int>& weights,int mid,int days){
    int sum=0;
    int count=1;
    for(int i=0;i<weights.size();i++){
        if((sum+weights[i])<=mid){
        sum+=weights[i];
    }
    else{
        count++;
        sum=weights[i];
    }
    }
    if(count<=days){
        return true;
    }
    else{
        return false;
    }
}
    int shipWithinDays(vector<int>& weights, int days) {
       int ans=-1;
       int low = *max_element(weights.begin(), weights.end());
       int sum=0;
       for(int i=0;i<weights.size();i++){
           sum+=weights[i];

       }
       int high=sum;
       while(low<=high){
           int mid=low+(high-low)/2;
           if(isPossible(weights,mid,days)){
               ans =mid;
               high=mid-1;
           }
           else{
               low=mid+1;
           }
       }
       return ans;
    }
};