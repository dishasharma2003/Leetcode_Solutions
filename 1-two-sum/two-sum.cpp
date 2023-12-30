class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int required_num=target-nums[i];
            if(m.find(required_num)!=m.end()){
                return{m[required_num],i};
            }
            m[nums[i]] = i;


        }
        return {};
        
    }
};