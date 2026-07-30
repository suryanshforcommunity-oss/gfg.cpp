#include <vector>
using namespace std;

vector<vector<int>> transpose(int a[][M], int n) {
    // Initialize a 2D vector of size N x N
    vector<vector<int>> result(n, vector<int>(n));
    
    // Fill the vector with the transposed elements of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Swap rows and columns: result[i][j] gets a[j][i]
            result[i][j] = a[j][i];
        }
    }
    
    return result;
}
