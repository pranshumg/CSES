/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int64_t ans = v[0], sum = v[0];
    for (int i = 1; i < n; i++) {
        if (sum + v[i] < v[i]) {
            sum = v[i];
        } else {
            sum += v[i];
        }
        ans = max(ans, sum);
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}