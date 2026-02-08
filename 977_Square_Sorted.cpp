class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> neg, pos;

        // Step 1: Separate
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        // Step 2: Square
        for (int i = 0; i < neg.size(); i++)
            neg[i] = neg[i] * neg[i];

        for (int i = 0; i < pos.size(); i++)
            pos[i] = pos[i] * pos[i];

        // Step 3: Reverse negatives (because they were decreasing)
        reverse(neg.begin(), neg.end());

        // Step 4: Merge
        int i = 0, j = 0, id = 0;
        int n = neg.size(), m = pos.size();

        vector<int> res(n + m);

        while (i < n && j < m) {
            if (neg[i] <= pos[j])
                res[id++] = neg[i++];
            else
                res[id++] = pos[j++];
        }

        while (i < n)
            res[id++] = neg[i++];

        while (j < m)
            res[id++] = pos[j++];

        return res;
    }
};
