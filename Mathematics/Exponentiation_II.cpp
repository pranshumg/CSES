#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

const int md1 = int(1e9) + 7;
const int md2 = md1 - 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        auto power = [](i64 a, int b, int md) -> int {
            i64 ans = 1;
            while (b) {
                if (b & 1) {
                    ans = (ans * a) % md;
                }
                a = (a * a) % md;
                b >>= 1;
            }
            return ans;
        };
        int a, b, c;
        cin >> a >> b >> c;
        cout << power(a, power(b, c, md2), md1) << '\n';
    }
    return 0;
}