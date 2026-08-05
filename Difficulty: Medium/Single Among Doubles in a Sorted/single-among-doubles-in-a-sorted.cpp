class Solution {
public:
    // FIXED: Changed parameters to accept a single vector reference
    int single(vector<int>& arr) {
        int n = arr.size();
        
        // Edge cases for small arrays
        if (n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n - 1] != arr[n - 2]) return arr[n - 1];
        
        int st = 1;
        int end = n - 2;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            // Check if mid is the unique element
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }
            
            // Index parity check to decide direction
            if (arr[mid] == arr[mid ^ 1]) {
                st = mid + 1; 
            } else {
                end = mid - 1; 
            }
        }
        
        return -1;
    }
};
