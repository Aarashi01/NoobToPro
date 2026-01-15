#include <bits/stdc++.h>
using namespace std;

int powerOfTwo(int n) {

    // Base case
    if (n == 1) {
        return true;
    }
    
    if (n < 1) {
        return false;
    }

    if (n % 2 != 0) {
        return false;
    }

    return powerOfTwo(n / 2);
}

int main() {
    int n = 16;
    if (powerOfTwo(n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}