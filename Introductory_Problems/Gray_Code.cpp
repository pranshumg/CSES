#include <bits/stdc++.h>
 
using namespace std;
 
int g(int n) {
    return n ^ (n >> 1);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    auto Bin = [&](int g) -> string {
        string res = "";
        while (g) {
            res += g % 2 ? '1' : '0';
            g >>= 1;
        }
        reverse(res.begin(), res.end());
        while (int(res.size()) < n) res = '0' + res;
        return res;
    };
    for (int i = 0; i < (1 << n); ++i) {
        cout << Bin(g(i)) << '\n';
    }
    return 0;
}