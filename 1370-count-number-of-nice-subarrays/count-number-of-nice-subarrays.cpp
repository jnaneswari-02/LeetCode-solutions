class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int ans = 0;

        for (int x : nums) {
            if (x % 2 == 1) {
                sum++;
            }

            if (mp.find(sum - k) != mp.end()) {
                ans += mp[sum - k];
            }

            mp[sum]++;
        }

        return ans;
    }
};