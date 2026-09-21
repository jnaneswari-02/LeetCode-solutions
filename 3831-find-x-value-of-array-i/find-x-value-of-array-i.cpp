class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        
        // dp[r] = number of subarrays ending at previous position
        // whose product % k == r
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> ndp(k, 0);

            int cur = num % k;

            // Start a new subarray with nums[i]
            ndp[cur]++;

            // Extend every previous subarray
            for (int r = 0; r < k; r++) {
                if (dp[r] > 0) {
                    int newRem = (r * cur) % k;
                    ndp[newRem] += dp[r];
                }
            }

            dp = ndp;

            // Add all subarrays ending here to the answer
            for (int r = 0; r < k; r++) {
                ans[r] += dp[r];
            }
        }

        return ans;
    }
};