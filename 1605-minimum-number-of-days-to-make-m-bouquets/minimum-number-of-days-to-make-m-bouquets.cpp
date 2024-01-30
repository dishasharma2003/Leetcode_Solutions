class Solution {
public:
bool possible(vector<int>& bloomDay,int mid, int m, int k){
    long long  counter=0;
    long long bouquet=0;
    for(long long i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            counter++;
        }
        else{
            bouquet+=floor(counter/k);
            counter=0;
        }
        
       
    }
     bouquet+=floor(counter/k);
    
        return bouquet>=m;
    
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long  n=bloomDay.size();
        long long  ans=-1;
        long long low=*min_element(bloomDay.begin(),bloomDay.end());
        long long high=*max_element(bloomDay.begin(),bloomDay.end());
        if((long long)m*k>n){ return -1;}
        else{
            while(low<=high){
                long long mid=low+(high-low)/2;
                if(possible(bloomDay,mid,m,k)==true){
                    ans=mid;
                    high=mid-1;    
                }
                 else{
                low=mid+1;
            }
                
            } 
           
        }

        return ans;
    }
};