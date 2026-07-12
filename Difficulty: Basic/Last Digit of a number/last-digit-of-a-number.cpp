#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int x ;
    x=n%10;
    
    if (x<0){
        cout<<-x;
    }
    else {
        cout<<x;
    }

    return 0;
}