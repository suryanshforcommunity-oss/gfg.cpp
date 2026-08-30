#include <algorithm>
#include <vector>

using namespace std;

template <class T>
void sortArray(vector<T>& a) {
    sort(a.begin(), a.end());
}

template <class T>
void printArray(vector<T>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
