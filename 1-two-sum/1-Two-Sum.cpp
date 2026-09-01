class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> value;
        for(int i = 0 ; i<n; i++){
           int complement = target - nums[i];
           if(value.count(complement)){
            return{i,value[complement]};
           }
           value[nums[i]] = i;
        }
    return {};
    }
};