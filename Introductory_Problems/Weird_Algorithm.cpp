#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n;
    cin >> n;
    auto solve = [&](auto&& self, i64 n) -> void {
        cout << n << ' ';
        if (n == 1) {
            return;
        }
        if (n & 1) {
            self(self, n * 3 + 1);
        } else {
            self(self, n / 2);
        }
    };
    solve(solve, n);
    return 0;
}