#include <bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
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