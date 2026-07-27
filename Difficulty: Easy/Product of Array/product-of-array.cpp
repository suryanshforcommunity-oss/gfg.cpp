class Solution {
public:
    long long int product(vector<int> &arr) {
        long long int prod = 1;
        long long int mod = 1000000007;
        
        for (int x : arr) {
            prod = (prod * x) % mod;
        }
        
        return prod;
    }
};
