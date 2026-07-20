#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    
    // Convert string to int using stoi()
    int convertedNum = stoi(num);
    
    // Double the integer
    int result = convertedNum * 2;
    
    // Print the final result
    cout << result << "\n";

    return 0;
}
