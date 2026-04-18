#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    int64_t sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    cout << max(sum, int64_t(v[n - 1] * 2)) << '\n';
    return 0;
}