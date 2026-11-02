class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // 1 2 9 10
        int n = nums.size();
        int mid = n/2;
        long long moves = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] != nums[mid]){
                moves += abs(nums[mid] -nums[i]);
            }
        }
        return moves;
    }
};