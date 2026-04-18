#include <bits/stdc++.h>
 
using namespace std;
 
const int md1 = int(1e9) + 7;
const int md2 = md1 - 1;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        auto Pow = [](int64_t a, int b, int md) -> int {
            int64_t ans = 1;
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
        cout << Pow(a, Pow(b, c, md2), md1) << '\n';
    }
    return 0;
}