class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0;
        int r=n-1;
        int sum;
        vector<int> pair;
        while(l < r){
            sum = nums[l] + nums[r];
            if(target == sum){
               break;
                }
            else if(sum > target){
                --r;
               
            }
            else if(sum < target){
                l++;
            }
            
        } 

        return {l + 1, r + 1};
    }
};