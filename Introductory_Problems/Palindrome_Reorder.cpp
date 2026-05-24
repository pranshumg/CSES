#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    int odd = 0;
    char c;
    string res = "";
    for (auto& a : mp) {
        if (a.second & 1) {
            c = a.first;
            odd++;
        }
        res += string(a.second >> 1, a.first);
    }
    if ((int(s.size()) % 2 == 0 && odd) || (int(s.size()) & 1 && odd != 1)) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    cout << res;
    if (int(s.size()) & 1) cout << c;
    reverse(res.begin(), res.end());
    cout << res << '\n';
    return 0;
}