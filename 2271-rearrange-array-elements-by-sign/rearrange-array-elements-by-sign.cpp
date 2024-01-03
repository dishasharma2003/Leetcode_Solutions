class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int>negative;
        vector<int> k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
      int i=0;
      int j=0;
      while(i< positive.size() && j<negative.size()){
        
             k.push_back(positive[i]);
                  i++;
        
          
                  k.push_back(negative[j]);
                  j++;
              
          }
      
      return k;


        
    }
};