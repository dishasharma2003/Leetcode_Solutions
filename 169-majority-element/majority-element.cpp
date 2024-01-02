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
            if(num.second>max){
                max=num.second;
                max_index=num.first;
            }
           
        }
         return max_index;
    
        
    }
};