class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int n = nums.size();
        long long int multiple = 1;
        int zeroCount = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                multiple *= nums[i];
            }
        }

        vector<long long int> arr(n);
        if (zeroCount > 1) {
            fill(arr.begin(), arr.end(), 0);
            return arr;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                arr[i] = multiple;
            } else if (zeroCount == 1) {
                arr[i] = 0; 
            } else {
                arr[i] = multiple / nums[i]; 
            }
        }

        return arr;
    }
};