/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, curr;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        st.insert(curr);
    }
    cout << st.size();
    return 0;
}