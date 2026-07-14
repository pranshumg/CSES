#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        i64 a, b;
        cin >> a >> b;
        cout << ((a + b) % 3 == 0 && abs(a - b) <= min(a, b) ? "YES" : "NO") << '\n'; 
    }
    return 0;
}