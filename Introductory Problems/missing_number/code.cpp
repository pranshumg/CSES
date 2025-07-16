/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n, curr, sum = 0;
    cin >> n;
    for (int64_t i = 0; i < n - 1; i++) {
        cin >> curr;
        sum += curr;
    }
    cout << ((n * (n + 1)) / 2) - sum;
    return 0;
}