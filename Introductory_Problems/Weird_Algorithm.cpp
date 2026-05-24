#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

void solve(i64 n) {
    if (n == 1) {
        cout << 1 << ' ';
        return;
    }
    cout << n << ' ';
    if (n & 1) solve(n * 3 + 1);
    else solve(n / 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve(n);
    return 0;
}