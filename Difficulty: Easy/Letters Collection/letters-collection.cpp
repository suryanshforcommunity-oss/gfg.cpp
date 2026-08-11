class Solution {
  public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q,
                          vector<int> queries[]) {
        vector<int> ans;

        for (int k = 0; k < q; ++k) {
            int q_type = queries[k][0];
            int i = queries[k][1];
            int j = queries[k][2];
            int current_sum = 0;

            // Set search range based on hop value
            int hop = (q_type == 1) ? 1 : 2;

            for (int r_offset = -hop; r_offset <= hop; ++r_offset) {
                for (int c_offset = -hop; c_offset <= hop; ++c_offset) {
                    
                    // Hop 2: skip inner 1-hop ring completely
                    if (q_type == 2 && abs(r_offset) <= 1 && abs(c_offset) <= 1) {
                        continue;
                    }
                    // Hop 1: skip origin cell
                    if (q_type == 1 && r_offset == 0 && c_offset == 0) {
                        continue;
                    }

                    int ni = i + r_offset;
                    int nj = j + c_offset;

                    // Bound verification step
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        current_sum += mat[ni][nj];
                    }
                }
            }
            ans.push_back(current_sum);
        }
        return ans;
    }
};
