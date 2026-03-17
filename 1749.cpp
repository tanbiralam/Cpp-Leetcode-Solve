class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int n = nums.size();
        int max_end = nums[0];
        int max_sum = nums[0];

        int min_end = nums[0];
        int min_sum = nums[0];

        for (int i = 1; i < n; i++) {
            int v1 = max_end + nums[i];
            int v2 = nums[i];

            int v3 = min_end + nums[i];
            int v4 = nums[i];

            max_end = max(v1, v2);
            min_end = min(v3, v4);

            max_sum = max(max_sum, max_end);
            min_sum = min(min_sum, min_end);
        }

        return max(abs(max_sum), abs(min_sum));
    }
};
