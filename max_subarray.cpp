//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution {
  public:
int maxSubarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    
    int low = 0;
    int high = k - 1;
    int sum = 0;
    
    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    int res = sum;
    
    while(high < n - 1) {
        low++;
        high++;
        
        sum = sum - arr[low - 1] + arr[high];
        res = max(res, sum);
    }
    
    return res;
}

};
