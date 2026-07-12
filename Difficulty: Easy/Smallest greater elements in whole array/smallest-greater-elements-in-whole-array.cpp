#include <vector>
#include <algorithm>

int* greaterElement(int arr[], int n) {
    // 1. Create a copy of the original array and sort it
    std::vector<int> sorted_arr(arr, arr + n);
    std::sort(sorted_arr.begin(), sorted_arr.end());
    
    // 2. Iterate through each element in the original array
    for (int i = 0; i < n; i++) {
        // std::upper_bound finds the first element strictly greater than arr[i]
        auto it = std::upper_bound(sorted_arr.begin(), sorted_arr.end(), arr[i]);
        
        // 3. If found, replace it; otherwise, assign the fallback flag value
        if (it != sorted_arr.end()) {
            arr[i] = *it;
        } else {
            arr[i] = -10000000;
        }
    }
    
    // 4. Return the modified pointer to the original array
    return arr;
}
