class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int st = 0;
        long long current_sum = 0;

        for (int end = 0; end < n; end++) {
            current_sum += arr[end];

            while (current_sum > target && st < end) {
                current_sum -= arr[st];
                st++;
            }

            if (current_sum == target) {
                return {st + 1, end + 1};
            }
        }

        return {-1};
    }
};
