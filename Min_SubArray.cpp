// User function Template for C++
// https://www.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        int n = a.size();
       int bestEnding = a[0];
       int ans = a[0];
       for(int i = 1; i<n; i++) {
        int v1 = bestEnding + a[i];
        int v2 = a[i];
        bestEnding = min(v1, v2);
        ans = min(ans, bestEnding);
       } 
       return ans;
    }        
};
