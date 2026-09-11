#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    bool has_odd = false;
    bool has_even = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            has_odd = true;
        } else {
            has_even = true;
        }
    }
    if (has_odd && has_even) {
        sort(a.begin(), a.end());
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
