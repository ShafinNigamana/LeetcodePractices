class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int pos = n-1;
        vector<int> result(n);
        while(l<=r){
            int leftval = nums[l] * nums[l];
            int rightval = nums[r] * nums[r];
            if(leftval > rightval){
                result[pos--] = leftval;
                l++;
            }
            else{
                result[pos--] = rightval;
                r--;
            }
        }
        return result;
    }
};