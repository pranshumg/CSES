#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }
    for (int i = 0; i < int(v.size()); ++i) {
        if (i & 1) {
            cout << v[i] << ' ';
        } else {
            v.push_back(v[i]);
        }
    }
    return 0;
}