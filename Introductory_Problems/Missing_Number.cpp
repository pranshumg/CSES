#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n;
    cin >> n;
    i64 xr = 0;
    for (int i = 0; i < n - 1; i++) {
        int cur;
        cin >> cur;
        xr ^= cur ^ (i + 1);
    }
    xr ^= n;
    cout << xr << '\n';
    return 0;
}