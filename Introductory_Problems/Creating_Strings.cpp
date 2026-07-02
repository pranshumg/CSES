#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    set<string> res;
    auto solve = [&](auto&& self, int idx) -> void {
        if (idx == int(s.size())) {
            res.insert(s);
            return;
        }
        for (int i = idx; i < int(s.size()); i++) {
            swap(s[idx], s[i]);
            self(self, idx + 1);
            swap(s[idx], s[i]);
        }
    };
    solve(solve, 0);
    cout << int(res.size()) << '\n';
    for (string s : res) {
        cout << s << '\n';
    }
    return 0;
}