#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter X: ";
    cin >> x;


    if( x > 0){
        cout << "X is a Positive Integer";
    }
    else if(x < 0){
        cout << "X is a Negative Integer";
    }
    else{
        cout << "X is Zero";
    }

    return 0;
}