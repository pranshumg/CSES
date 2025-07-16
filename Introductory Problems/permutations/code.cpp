/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n > 3 || n == 1) {
        vector<int> even, odd;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                even.emplace_back(i);
            } else {
                odd.emplace_back(i);
            }
        }
        for (auto it: even) {
            cout << it << " ";
        }
        for (auto it: odd) {
            cout << it << " ";
        }
    } else {
        cout << "NO SOLUTION";
    }
    return 0;
}