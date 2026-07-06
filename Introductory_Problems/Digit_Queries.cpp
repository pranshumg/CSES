#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        i64 k;
        cin >> k;
        i64 base = 0, cnt = 9, len = 1;
        while (base + cnt * len <= k) {
            base += cnt * len;
            cnt *= 10;
            len++;
        }
        if (base == k) {
            cout << 9 << '\n';
            continue;
        }
        base++;
        i64 num = pow(10, len - 1);
        int d = int(log10(num)) + 1;
        i64 skip = (k - base) / d;
        num += skip;
        base += skip * d;
        string s = to_string(num);
        cout << s[k - base] << '\n';
    }
    return 0;
}