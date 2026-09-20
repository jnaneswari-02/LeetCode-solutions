class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
    
        
        auto temoravlin = intervals;

        int n = intervals.size();

        vector<int> starts, ends;

        for (auto &x : intervals) {
            starts.push_back(x[0]);
            ends.push_back(x[1]);
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        long long ans = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            // Previous intervals whose end < current start
            while (j < i && ends[j] < starts[i]) {
                j++;
            }

            // i previous intervals - non-intersecting intervals
            ans += i - j;
        }

        return ans;
 
    }
};