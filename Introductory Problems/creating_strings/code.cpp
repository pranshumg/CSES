/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    int k = 0;
    do {
        k++;
        ans.emplace_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << k << '\n';
    for (auto it: ans) {
        cout << it << '\n';
    }
    return 0;
}