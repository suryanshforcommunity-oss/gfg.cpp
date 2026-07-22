class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        // Phase 1: Find the survivor candidate
        for (int val : nums) {
            if (count == 0) {
                candidate = val;
            }
            if (val == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Phase 2: Verification Pass (Crucial for general correctness!)
        int actualCount = 0;
        for (int val : nums) {
            if (val == candidate) {
                actualCount++;
            }
        }

        // Check if the candidate actually meets the strict majority requirement
        if (actualCount > nums.size() / 2) {
            return candidate;
        }

        return -1; // Return -1 if the array has no true majority element
    }
};
