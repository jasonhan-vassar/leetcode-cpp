/*
n == cost.size()
runtime: O(n)
space: O(n)
*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector<int> dp(size + 1, 0);

        for (int i = 2; i <= size; i++) {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[size];
    }
};
