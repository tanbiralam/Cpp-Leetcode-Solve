class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int noDelete = arr[0];
        int oneDelete = INT_MIN;
        int res = arr[0];

        for (int i = 1; i < n; i++) {
            int prevNoDelete = noDelete;
            int prevOneDelete = oneDelete;

            noDelete = max(noDelete + arr[i], arr[i]);

            int v2;

            if (prevOneDelete == INT_MIN) {
                v2 = arr[i];
            } else {
                v2 = prevOneDelete + arr[i];
            }

            oneDelete = max(v2, prevNoDelete);
            res = max(res, max(oneDelete, noDelete));
        }
        return res;
    }
};
