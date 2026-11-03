class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        long long moves = 0;
        for(int i = 0; i<nums.size(); i++){
            while(nums[i] != max){
                nums[i]++;
                moves++;
            }
        }
        return moves;
    }
};