#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int maxW = 0;
        int lp = 0;
        int rp = n - 1;
        
        while (lp < rp) {
            // 1. Calculate the distance between lines
            int width = rp - lp;
            
            // 2. Water height is limited by the shorter line
            int ht = min(arr[lp], arr[rp]);
            
            // 3. Update maximum water area found so far
            int curWater = width * ht;
            maxW = max(maxW, curWater);
            
            // 4. Greedy Move: Eliminate the shorter line
            if (arr[lp] < arr[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        return maxW;
    }
};
