#include <bits/stdc++.h>
using namespace std;

int main() {
    string word1 = "abc";
    string word2 = "pqr";
    string res = "";

        int i = 0, j = 0;

        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                res.push_back(word1[i++]);
            }
            if (j < word2.size()) {
                res.push_back(word2[j++]);
            }
        }
        cout << res;
}