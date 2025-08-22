/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < (int)s.size(); i++) {
        mp[s[i]]++;
    }    
    int cnt = 0;
    char c;
    string ans = "";
    for (auto it: mp) {
        if (it.second % 2 != 0) {
            cnt++, c = it.first;
        }
        for (int i = 0; i < it.second / 2; i++) {
            ans += it.first;
        }
        if (((int)s.size() % 2 == 0 && cnt > 0) || ((int)s.size() % 2 != 0 && cnt > 1)) {
            cout << "NO SOLUTION";
            return;
        }
    }
    cout << ans;
    if (cnt != 0) {
        cout << c;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}