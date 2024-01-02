#include<unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int max=0;
        int max_index=-1;
        for(auto num:hash){
            if(num.second>(n/2)){
              return num.first;
            }
           
        }
        
    return -1;
        
    }
};