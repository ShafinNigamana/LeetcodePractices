class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less = 0;
        int eq =0;
        for(int i : nums){
            if(i < target){
                less++;
            }
            else if(i == target){
                eq++;
            }
        }
        vector<int> val;
        for(int i = less; i<less+eq; i++){
            val.push_back(i);
        }
        return val;
    }
};