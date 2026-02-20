// https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1

#include <algorithm>
using namespace std;

class Solution {
public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        sort(arr, arr + n);   

        long long count = 0;

        for(int i = 0; i < n - 2; i++) {
            int st = i + 1;
            int end = n - 1;

            while(st < end) {
                long long res = arr[i] + arr[st] + arr[end];

                if(res < sum) {
                    count += (end - st);
                    st++;
                } else {
                    end--;
                }
            }
        }

        return count;   
    }
};
