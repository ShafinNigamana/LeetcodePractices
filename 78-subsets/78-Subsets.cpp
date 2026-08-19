class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& nums, int index, vector<int>& current) {
        if (index == nums.size()) {
            ans.push_back(current);
            return;
        }

        backtrack(nums, index + 1, current);

        current.push_back(nums[index]);
        backtrack(nums, index + 1, current);

        current.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        backtrack(nums, 0, current);
        return ans;
    }
};