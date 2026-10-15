class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int l  =  i+1;
            int r = n-1;
            int target = -1 * nums[i];
            while(l<r){
                int sum  = nums[l] + nums[r];
                if(sum == target){
                    result.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<n && nums[l] == nums[l-1]){
                        l++;
                    }
                    while(r>0 && nums[r] == nums[r+1]){
                        r--;
                    }
                }
                else if(sum > target){
                    r--;
                }
                else if(sum<target){
                    l++;
                }
            }
        }
        return result;
    }
};