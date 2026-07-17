#include <stdexcept>

class Solution {
  public:
    int marks(int a) {
        try {
            // 1. Check constraints and throw an exception if invalid
            if (a < 0 || a > 100) {
                throw std::out_of_range("Marks must be between 0 and 100.");
            }
            
            // 2. Return the valid score
            return a;
            
        } catch (const std::out_of_range& e) {
            // 3. Return -1 for invalid input as specified
            return -1;
        }
    }
};
