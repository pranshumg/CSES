/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v(n), w(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    w = v;
    sort(v.begin(), v.end());
    int i = 0, j = n - 1, el1 = -1, el2 = -1;
    while (i < j) {
        if (v[i] + v[j] == x) {
            el1 = v[i], el2 = v[j];
            break;
        } else if (v[i] + v[j] > x) {
            j--;
        } else {
            i++;
        }
    }
    if (el1 == -1 || el2 == -1) {
        cout << "IMPOSSIBLE";
    } else {
        auto it1 = find(w.begin(), w.end(), el1);
        auto it2 = find(w.rbegin(), w.rend(), el2);
        int idx1 = (it1 - w.begin()) + 1, idx2 = n - distance(w.rbegin(), it2);
        if (idx1 > idx2) {
            swap(idx1, idx2);
        }
        cout << idx1 << " " << idx2;
    }
    return 0;
}